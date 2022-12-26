#include <stdio.h>

int main()
{
	int m,n;
	int sum;
	float avg;
	printf("please enter two numbers:\n");
	scanf("%f",&m);
	scanf("%f",&n);
	sum=m+n;
	avg=sum/2;
	printf("The average of them is %f",avg);
	return 0;
}
