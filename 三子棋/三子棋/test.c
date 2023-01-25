#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("**********************************\n");
	printf("*****1.������Ϸ    0.�˳���Ϸ******\n");
	printf("**********************************\n");
}
void game()
{
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	int ret = 0;
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret=Iswin(board, ROW, COL);
		if (ret != 'c')
			break;
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret=Iswin(board, ROW, COL);
		if (ret != 'c')
			break;
		//�жϵ����Ƿ�Ӯ
	}
	//ComputerMove(board, ROW, COL);
	if (ret == '*')
	{
		printf("���ʤ��\n");
	}
	else if (ret == '#')
	{
		printf("���Ի�ʤ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}
int main()
{
	int i = 0;
	//���ʱ�����ظ���
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ���Ƿ������Ϸ:>");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("�������,������ѡ��.\n");
		}
	} while (i != 0);

	return 0;
}