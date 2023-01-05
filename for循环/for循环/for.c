#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{

		printf("%d ", i);
	}
	printf("\n");
	int a = 0;
	int b = 0;
	for (; a < 10; a++)
	{
		for (; b < 10; b++)
		{
			printf("hehe\n");
		}
	}
	return 0;
}