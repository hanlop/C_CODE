#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 0;
	int n = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		//�����жϹ��� 1. �Գ��� ��Ҫ����2-i-1������
		for (n = 2; n < i; n++)
		{
			if (i % n == 0)
			{
				break;
			}
		}
		if (n == i)
		{
			count++;
			printf("%d ", i);
		}
		
	}
	printf("\n%d\n", count);

	return 0;
}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		//�ж�����ķ���
//	    //���������Ҳ��ܱ�100����
//		//�ܱ�400����
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		 else if (i % 400 == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\nһ����%d���꣬��1000��2000��\n",count);
//
//	return 0;
//}
//int main()
//{
//	//�����Լ��ʹ��շת�����
//	int a, b;
//	int r;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//	{
//		while (a % b != 0)
//		{
//			r = a % b;
//			a = b;
//			b = r;
//		}
//		printf("���Լ��Ϊ%d\n", b);
//	}
//	else if(b>a)
//	{
//		while (b % a != 0)
//		{
//			r = b % a;
//			b = a;
//			a = r;
//		}
//		printf("���Լ��Ϊ%d\n", a);
//	}
//	else
//	{
//		printf("���Լ��Ϊ%d\n", b);
//	}
//
//
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
	//int a, b, c;
	//scanf("%d%d%d",&a,&b,&c);
	//if (a < b)
	//{
	//	int tam = a;
	//	a = b;
	//	b = tam;
	//}
	//if (a < c)
	//{
	//	int tam = a;
	//	a = c;
	//	c = tam;
	//}
	//if (b < c)
	//{
	//	int tam = b;
	//	b = c;
	//	c = tam;
	//}
	//printf("%d %d %d\n", a, b, c);

//	return 0;
//}