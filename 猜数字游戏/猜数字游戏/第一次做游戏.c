#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void menus()
{
	printf("***************************\n");
	printf("***************************\n");
	printf("***1.������Ϸ  0.�˳���Ϸ***\n");
	printf("***************************\n");
	printf("***************************\n");
}
void game()
{
	//��һ�������
	//�Ƚϴ�С
	int guess;
	int ret = 0;
	ret = rand() % 100 + 1;//�¸������
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	int i = 0;
	srand((unsigned int)time(NULL));//�¸���ʹ��
	do
	{
		menus();
		printf("�Ƿ������Ϸ:>");
		scanf("%d",&i);
		switch (i)
		{
		case 0:
			printf("�˳���Ϸ");
			break;
		case 1:
			game();
			break;
		default:
			printf("�����������������");
			break;
		}
	} while (i);

	return 0;
}