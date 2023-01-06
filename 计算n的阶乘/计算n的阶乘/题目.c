#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int ret = 1;
	int n = 0;
	int i = 0;
	int b = 0;
	int sum=0;

	for (b = 1; b <= 3; b++)
	{
		n++;
		for (i = 1,ret=1; i <= n; i++)
		{
		
			ret *= i;
		}
		
		sum += ret;
	}
	//for (i = 1; i <= n; i++)
	//{
	//	ret *=i;
	//}
	printf("%d", sum);
	return 0;
}