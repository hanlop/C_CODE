#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 9
#define LOW 9
#define ROWS ROW+2
#define LOWS LOW+2
#define easy_count 10

#include <stdlib.h>
#include <time.h>

#include <stdio.h>

void IntiBoard(char Board[ROWS][LOWS], int rows, int lows, char set);
void Display(char Board[ROWS][LOWS], int rows, int lows);
void SetLei(char mine[ROWS][LOWS],int row, int low,int count);
void SaoLei(char mine[ROWS][LOWS], char show[ROWS][LOWS], int row, int low);
int CalcLei(char mine[ROWS][LOWS],int x,int y);