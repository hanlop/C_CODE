#include <stdio.h>

int main()
{
	int i=0;
	printf("加入比特\n");
	printf("你会好好学习吗？(1/0)?>:\n");
	scanf("%d",&i);
	
	if(i==1)
		printf("ok\n");	
	else
		printf("no\n");
	
	return 0;
}
