#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码>:");
		scanf("%s", &password);
		if (strcmp(password, "123456") == 0)
		{
			printf("密码正确\n");
			break;
		}
		else
		{
			printf("密码输入错误\n");
		}
	}

	if (i == 3)
	{
		printf("三次密码错误，通过失败\n");
	}

	return 0;
}