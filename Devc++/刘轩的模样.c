#include <stdio.h>

int main()
{
	const int PASS=60;
	
	int score;
	
	printf("请输入刘艺萱的颜值分数：");
	scanf("%d",&score);
	
	printf("你输入的颜值分数是%d.\n",score);
	if(score<PASS)
	    printf("很遗憾，你长得很丑。");
	    
	else {
	      printf("祝贺你，你长得真的很漂亮。");
		  printf("再见\n");	
	}   
	return 0;
}
