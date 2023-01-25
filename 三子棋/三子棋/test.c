#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("**********************************\n");
	printf("*****1.进入游戏    0.退出游戏******\n");
	printf("**********************************\n");
}
void game()
{
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	int ret = 0;
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret=Iswin(board, ROW, COL);
		if (ret != 'c')
			break;
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret=Iswin(board, ROW, COL);
		if (ret != 'c')
			break;
		//判断电脑是否赢
	}
	//ComputerMove(board, ROW, COL);
	if (ret == '*')
	{
		printf("玩家胜利\n");
	}
	else if (ret == '#')
	{
		printf("电脑获胜\n");
	}
	else
	{
		printf("平局\n");
	}
}
int main()
{
	int i = 0;
	//理解时间戳相关概念
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择是否进入游戏:>");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误,请重新选择.\n");
		}
	} while (i != 0);

	return 0;
}