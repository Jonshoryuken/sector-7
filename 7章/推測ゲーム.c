/***************************************************************
*guess --簡単な推測ゲーム										*
*																*																
*使用法:														*	
*	guess														*	
*																*
*																*
*		1から100の間の数をランダムに選択する					*
*		プレイヤーは指定された上限下限の間の数を1つ選ぶ。		*
*		プレイヤーの選んだ数がプログラムが選んだ数と一致したら	*
*		プレイターの勝ち。										*	
*		合っていなければ、プレイヤーの推測に合わせて			*
*		範囲を調整し、ゲームが続く。							*
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

			if (n == g)	//入力した数値が一致していればbreak
			{
				break;
			}
			if (n < g)	//入力した数値が小さければlowに設定
			{
				l = n;
			}
			else       //入力した数値が大きければhighに設定
			{
				h = n;
			}

		}
		printf("Bingo!\n");
	}
	return 0;
}