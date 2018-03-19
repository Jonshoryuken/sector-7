#include<stdio.h>

#define MAX 4


void array_update(unsigned int *data, int num)
{
	puts("2‚ð‰ÁŽZ‚·‚é‚æ");
	int i;
	for (i = 0; i < num; i++)
	{
		data[i] += 2;
	}

}

int main(void)
{
	unsigned int red[MAX];
	for (int i = 0; i < MAX; i++)
	{
		printf("red[%d]=",i);
		scanf_s("%d", &red[i]);
	}
	putchar('\n');

	array_update(&red,MAX);

	for (int i = 0; i < MAX; i++)
	{
		printf("red[%d]=%d\n", i, red[i]);
	}

	return 0;
}

