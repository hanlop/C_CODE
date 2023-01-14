#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//本质上arr1是个指针
int get_need(int arr1[],int x,int sz)
{
	
	int left = 0;
	int right = sz - 1;
	while (left <= right)	
	{
		int a = (right + left) / 2;
		int j = arr1[a];
		if (x > j)
		{
			left = a + 1;
		}
		else if (x < j)
		{
			right = a - 1;
		}
		else
		{
			return a;
		}
	}
		return -1;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 17;
	int h = get_need(arr, k,sz);//arr传过去的是首元素的地址
	if (h == -1)
	{
		printf("找不到了\n");
	}
	else
	{
		printf("找到了，下标是%d\n", get_need(arr,k,sz));
	}
	return 0;
}
//int get_rn(int x)
//{
//	if ((x % 4 == 0 &&  100 != 0) || (x % 400 == 0))
//		return 1;
//	else	
//		return 0;
//	
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (get_rn(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}