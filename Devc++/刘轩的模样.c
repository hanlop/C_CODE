#include <stdio.h>

int main()
{
	const int PASS=60;
	
	int score;
	
	printf("���������������ֵ������");
	scanf("%d",&score);
	
	printf("���������ֵ������%d.\n",score);
	if(score<PASS)
	    printf("���ź����㳤�úܳ�");
	    
	else {
	      printf("ף���㣬�㳤����ĺ�Ư����");
		  printf("�ټ�\n");	
	}   
	return 0;
}
