#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int m = 10;
	int h = 20;
	int max = 0;

	max = Max(m, h);
	printf("max=%d", max);

	return 0;
}
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}