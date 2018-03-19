#include<stdio.h>

char line[100]; //���͍s�f�[�^
int result;		//���Z����
char operator;	//���[�U���w�肵�����Z�q
int value;		//���Z�q�̌�Ɏw�肳�ꂽ�l

int main(void)
{
	result = 0;

	while (1)
	{
		printf("Result :%d\n", result);

		printf("Enter operator and number:");

		fgets(line, sizeof(line), stdin);

		sscanf(line, "%c %d", &operator,&value); //���͂������Z�q�Ɛ��l��ϐ��Ɋi�[

		if (operator=='q' || operator=='Q')
		{
			break;
		}

		if (operator == '+')
		{
			result += value;
		}

		else if (operator=='-')
		{
			result -= value;
		}

		else if (operator=='*')
		{
			result *= value;
		}

		else if (operator=='/')
		{
			if (value==0)
			{
				printf("Error:Divide by zero\n");
				printf("  operation ignored\n");
			}
			else {
				result /= value;
			}
		}

		else
		{
			printf("Unknown operator %c\n", operator);
		}
	}

	return 0;
}

