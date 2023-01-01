#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	scanf("%d", &a);
	
	if (a % 2)
	{
		printf("a是奇数\n");
	}
	else
	{
		printf("a是偶数\n");
	}

	int b = 1;
		while (b < 101)
		{
			if (b % 2)
			   printf("%d ", b);
			b++;
		}

	return 0;
}
