#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char length[5] = "����";
char volume[5] = "�̐�";

char inch[7] = "�C���`";
char yard[7] = "���[�h";
char mile[7] = "�}�C��";

char gallon[7] = "�K����";
char quart[9] = "�N�H�[�g";

//�������v�Z����֐�
void length_calc(char l[5], double *v)
{
	if (strcmp(l, inch) == 0)
	{
		*v = (*v)*0.0254;
	}
	else if (strcmp(l, yard) == 0)
	{
		*v = (*v)*0.9144;
	}
	else if (strcmp(l, mile) == 0)
	{
		*v = (*v)*1609.334;
	}
}

//���ʂ��v�Z����֐�
void volume_calc(char vo[5], double *v)
{
	if (strcmp(vo, gallon) == 0)
	{
		*v = (*v)*3.785;
	}
	else if (strcmp(vo, quart) == 0)
	{
		*v = (*v)*0.9464;
	}
}


int main(void) {
	
	char keisoku[80];
	double value;

	char length_u[5];
	char volume_u[5];

	char length[5] = "����";
	char volume[5] = "�̐�";

	
	printf("/���[�h�E�|���h�@/");
	printf("'����'��'�̐�'�ǂ�����v���������ł���:");
	fgets(keisoku, sizeof(keisoku), stdin);
	
	if (strcmp(keisoku,length)==0)
	{
		printf("�ȉ����v���ł���P�ʂƂȂ�܂�\n");
		printf("�C���`/���[�h/�}�C��\n");
		printf("�ǂ��I�т܂���:");
		
		fgets(length_u, sizeof(length_u), stdin);

		//�G���[����������



		//�����̌v�Z
		length_calc(length_u,&value);

		printf("%fm", value);
	}


	else if (strcmp(keisoku, volume) == 0)
	{
		printf("�ȉ����v���ł���P�ʂƂȂ�܂�\n");
		printf("�K����/�N�H�[�g\n");
		printf("�ǂ��I�т܂���:");

		fgets(volume_u, sizeof(volume_u), stdin);

		//�G���[����������



		//�����̌v�Z
		volume_calc(length_u, &value);

		printf("%fL", value);
	}


	return 0;
}
