#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char length[5] = "長さ";
char volume[5] = "体積";

char inch[7] = "インチ";
char yard[7] = "ヤード";
char mile[7] = "マイル";

char gallon[7] = "ガロン";
char quart[9] = "クォート";

//長さを計算する関数
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

//質量を計算する関数
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

	char length[5] = "長さ";
	char volume[5] = "体積";

	
	printf("/ヤード・ポンド法/");
	printf("'長さ'と'体積'どちらを計測したいですか:");
	fgets(keisoku, sizeof(keisoku), stdin);
	
	if (strcmp(keisoku,length)==0)
	{
		printf("以下が計測できる単位となります\n");
		printf("インチ/ヤード/マイル\n");
		printf("どれを選びますか:");
		
		fgets(length_u, sizeof(length_u), stdin);

		//エラー処理を入れる



		//長さの計算
		length_calc(length_u,&value);

		printf("%fm", value);
	}


	else if (strcmp(keisoku, volume) == 0)
	{
		printf("以下が計測できる単位となります\n");
		printf("ガロン/クォート\n");
		printf("どれを選びますか:");

		fgets(volume_u, sizeof(volume_u), stdin);

		//エラー処理を入れる



		//長さの計算
		volume_calc(length_u, &value);

		printf("%fL", value);
	}


	return 0;
}
