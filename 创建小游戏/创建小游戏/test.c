#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("*******************************\n");
	printf("*******    1.进入游戏    ******\n");
	printf("*******    0.退出游戏   *******\n");
	printf("*******************************\n");
}
void game()
{
	char mine[ROWS][LOWS] = { 0 };
	char show[ROWS][LOWS] = { 0 };
	IntiBoard(mine, ROWS, LOWS, '0');
	IntiBoard(show, ROWS, LOWS, '*');
//	Display(mine, ROW, LOW);
	Display(show,ROW,LOW);
	SetLei(mine, ROW, LOW,easy_count);
	//设置地雷
//	Display(mine, ROW, LOW);
	SaoLei(mine, show, ROW, LOW);

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏");
			break;
		default:
			printf("输入错误，请重新输入");
			break;
		}

	} while (input);

	return 0;
}