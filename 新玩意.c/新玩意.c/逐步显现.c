#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include<windows.h>

int main()
{
	char han[] = "welcome to bit!!!!!!";
	char hah[] = "                    ";
	int left = 0;
	int right = strlen(han) - 1;

	while (left <= right)
	{
		hah[left] = han[left];
		hah[right] = han[right];
		printf("%s\n", hah);
		//休息一秒
		Sleep(500);
		system("cls");//执行系统命令一个函数-cls-清空屏幕
		left++;
		right--;
	}
	printf("welcome to bit!!!!!!");

	return 0;
}