/***************************************************************
*guess --�ȒP�Ȑ����Q�[��										*
*																*																
*�g�p�@:														*	
*	guess														*	
*																*
*																*
*		1����100�̊Ԃ̐��������_���ɑI������					*
*		�v���C���[�͎w�肳�ꂽ��������̊Ԃ̐���1�I�ԁB		*
*		�v���C���[�̑I�񂾐����v���O�������I�񂾐��ƈ�v������	*
*		�v���C�^�[�̏����B										*	
*		�����Ă��Ȃ���΁A�v���C���[�̐����ɍ��킹��			*
*		�͈͂𒲐����A�Q�[���������B							*
*																*
*																*
*																*
*																*/	

#include<stdio.h>
#include<stdlib.h>

int g, l, h, c, n;
char line[80];
int main(void)
{
	while (1) {
		g = rand() % 100 + 1;
		l = 0;
		h = 100;
		c = 0;
		while (1)
		{
			printf("Bounds %d-%d\n", l, h);
			printf("Value[%d]?", c);
			++c;

			fgets(line, sizeof(line), stdin);
			sscanf(line, "%d", &n);

			if (n == g)	//���͂������l����v���Ă����break
			{
				break;
			}
			if (n < g)	//���͂������l�����������low�ɐݒ�
			{
				l = n;
			}
			else       //���͂������l���傫�����high�ɐݒ�
			{
				h = n;
			}

		}
		printf("Bingo!\n");
	}
	return 0;
}