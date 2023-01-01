#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 0;
	printf("今天是2023的第一天，希望在新的一年能把c语言学好。\n");
	printf("希望家人身体健康。\n");
	scanf("%d",& i);
	printf("只要%d直努力\n", i);

	if (i == 1)
		printf("you will become a excellent student.\n");
	else
		printf("你会变成废材的\n");

	return 0;
}