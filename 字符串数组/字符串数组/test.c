#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c',};
	// \0���ַ��������ı�־
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%d\n", strlen(arr1));//strlen-string length-�����ַ�������
	printf("%d\n", strlen(arr2));
	return 0;
}