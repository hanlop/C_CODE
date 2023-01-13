#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//shutdown -s -t 60
	//shutdown-a
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("你的电脑将在一分钟后关机，如果想取消，请输入我是大笨猪：>");
	scanf("%s", input);
	if (strcmp(input, "我是大笨猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}