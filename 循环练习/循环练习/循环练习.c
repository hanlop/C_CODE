#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int k = 7;//��ĿҪ���ҵ�7

	while (left <= right)
	{
		int m = arr[(left + right) / 2];
		int middle = (left + right) / 2;
		if (k < m)
		{
			right = middle - 1;
		}
		else if (k > m)
		{
			left = middle + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d", middle);
			break;
		}
	}

	if (left > right)
	{
		printf("û�и�����\n");
	}

	return 0;
}