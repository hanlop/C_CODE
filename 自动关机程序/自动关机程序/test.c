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
	printf("��ĵ��Խ���һ���Ӻ�ػ��������ȡ�������������Ǵ���>");
	scanf("%s", input);
	if (strcmp(input, "���Ǵ���") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}