#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void fight(void);
void bailan(void);

int main()
{
	printf("�벻Ҫ�����Ƿ�����1\n");
	int i = 0;
	scanf("%d", &i);
	if (i = 1)
	{
	    fight();
	}
	else
	{
		bailan();
	}

	while (i < 100)
	{
		i++;
		printf("����ѧϰ ");
		if (i <= 99)
			continue;
		printf("\n");
		printf("�����ջ�ȡ�óɹ�\n");
	}

	return 0;
}
void fight(void)
{
	printf("Ҫһֱ�ܶ�\n");
}
void bailan(void)
{
	printf("���Ⱳ�Ӿ������ˣ����ɵ��\n");
}