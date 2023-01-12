#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>




int main()
{
	int i = 0;
	int n = 0;
	int c = 0;

	for (i = 1; i <= 9; i++)
	{
		for (n = 1; n <= i; n++)
		{
			c = i * n;
				printf("%d*%d=%-2d ", n, i, c);
		}
		printf("\n");
	}

	return 0;
}
//找最大值
//int main()
//{
//	int arr[10] = { -1 ,-1,-2,-3,-4,-5,-6,-9,-8,-2};
//
//	int max = arr[0];//最大值存放在max中
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//
//	return 0;
//}
//
//#include <stdio.h>
//求和
//int main()
//{
//	float sum = 0.0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 != 0)
//			sum += 1.0 / i;
//		else
//			sum += -1.0 / i;
//	}
//	printf("%lf", sum);
//
//	return 0;
//}
//#include <stdio.h>
//找含有9的数字
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9|| i / 10 == 9)
//		{
//			printf("%d ", i);
//		}
//
//	}
//
//	return 0;
