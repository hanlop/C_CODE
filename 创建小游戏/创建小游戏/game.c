#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

int CalcLei(char mine[ROWS][LOWS],int x,int y)
{
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] +
		mine[x][y - 1] + mine[x][y + 1] +
		mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] -
		8 * '0';
}
void IntiBoard(char Board[ROWS][LOWS], int rows, int lows, char set)
{
	int i = 0;
	int j = 0;
	for(i=0;i<rows;i++)
		for (j = 0; j < LOWS; j++)
		{
			Board[i][j] = set;
		}
}
void Display(char Board[ROWS][LOWS], int row, int low)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= low; j++)
		{
			printf("%c ", Board[i][j]);
		}
		printf("\n");
	}
}
void SetLei(char mine[ROWS][LOWS], int row, int low,int count)
{
	while (count)
	{
		int x = rand() % 9 +1;
		int y = rand() % 9 +1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
void SaoLei(char mine[ROWS][LOWS], char show[ROWS][LOWS], int row, int low)
{
	int x = 0;
	int y = 0;
	int count = row * low - easy_count;
	while (count)
	{
		scanf("%d%d", &x, &y);
		if (x >= 1 && x<=9 && y >= 1 && y<=9)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				break;
			}
			else
			{ 
				char a = CalcLei(mine, x, y) + '0';
				show[x][y] = a;
				Display(show, ROW, LOW);
				count--;
			}
		}
		else
		{
			printf("输入错误，请重新输入");
		}
	}
}