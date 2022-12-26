#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	
	int f=0;
	
	if(x>0){
		f=1;
	}
	else if(x==0){
		f=0;
	}else {
		f=-1;
	}
	printf("%d\n",f);
	
	return 0;
}
