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
		//��Ϣһ��
		Sleep(500);
		system("cls");//ִ��ϵͳ����һ������-cls-�����Ļ
		left++;
		right--;
	}
	printf("welcome to bit!!!!!!");

	return 0;
}