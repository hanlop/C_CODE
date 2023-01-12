#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void menus()
{
	printf("***************************\n");
	printf("***************************\n");
	printf("***1.进行游戏  0.退出游戏***\n");
	printf("***************************\n");
	printf("***************************\n");
}
void game()
{
	//找一个随机数
	//比较大小
	int guess;
	int ret = 0;
	ret = rand() % 100 + 1;//新概念记忆
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
int main()
{
	int i = 0;
	srand((unsigned int)time(NULL));//新概念使用
	do
	{
		menus();
		printf("是否进行游戏:>");
		scanf("%d",&i);
		switch (i)
		{
		case 0:
			printf("退出游戏");
			break;
		case 1:
			game();
			break;
		default:
			printf("输入错误，请重新输入");
			break;
		}
	} while (i);

	return 0;
}