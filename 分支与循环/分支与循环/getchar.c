#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int ch = 0;
	//ctrl+z����ѭ��
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}

	return 0;
}