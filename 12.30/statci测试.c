#include <stdio.h>
void type();

int main()
{
	int i;
	while(i<5)
	{
		type();
		i++;
	}
	
	return 0;
}
void type()
{
	static int a=1;
	a++;
	printf("a=%d\n",a);
}
