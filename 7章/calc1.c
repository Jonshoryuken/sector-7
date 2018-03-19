#include<stdio.h>

char line[100]; //入力行データ
int result;		//演算結果
char operator;	//ユーザが指定した演算子
int value;		//演算子の後に指定された値

int main(void)
{
	result = 0;

	while (1)
	{
		printf("Result :%d\n", result);

		printf("Enter operator and number:");

		fgets(line, sizeof(line), stdin);

		sscanf(line, "%c %d", &operator,&value); //入力した演算子と数値を変数に格納

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

