#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void fight(void);
void bailan(void);

int main()
{
	printf("请不要继续颓废输入1\n");
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
		printf("不断学习 ");
		if (i <= 99)
			continue;
		printf("\n");
		printf("你最终会取得成功\n");
	}

	return 0;
}
void fight(void)
{
	printf("要一直奋斗\n");
}
void bailan(void)
{
	printf("你这辈子就这样了，你个傻逼\n");
}