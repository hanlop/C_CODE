#define _CRT_SECURE_NO_WARNINGS 1
//sttcpy与memset的使用
#include <stdio.h>
#include <string.h>

void change(int* x, int* y)
{
	int tmp = 0;
	tmp = *x;
	*x = *y;
	*y = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	//int* ph = a;
	//int* pb = b;
	change(&a, &b);
	printf("a=%d b=%d", a, b);

	return 0;
}
//int main()
//{
//	char arr1[] = "abcdee";
//	char arr2[] = "acd";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	memset(arr1, 'h', 5);
//	printf("%s\n", arr1);
//
//	return 0;
//}