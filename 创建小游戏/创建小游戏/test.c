#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("*******************************\n");
	printf("*******    1.������Ϸ    ******\n");
	printf("*******    0.�˳���Ϸ   *******\n");
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
	//���õ���
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
			printf("�˳���Ϸ");
			break;
		default:
			printf("�����������������");
			break;
		}

	} while (input);

	return 0;
}