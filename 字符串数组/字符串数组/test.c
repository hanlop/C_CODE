#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c',};
	// \0是字符串结束的标志
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%d\n", strlen(arr1));//strlen-string length-计算字符串长度
	printf("%d\n", strlen(arr2));
	return 0;
}