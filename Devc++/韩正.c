#include <stdio.h>
 
int main()
 
{
    int i, j, k, n = 0, x = 0, y = 50;
 
    printf("\n\n\n\n\n");
    printf("         lovelove                   lovelove\n");
    printf("       lovelovelove               lovelovelove\n");
    printf("     lovelovelovelove           lovelovelovelove\n");
    printf("   lovelovelovelovelove       lovelovelovelovelove\n");
    printf("  lovelovelovelovelovelo     lovelovelovelovelovelo\n");
    printf(" lovelovelovelovelovelove   lovelovelovelovelovelov\n");
    for (i = 0; i < 2; i++)
    {
        printf("lovelovelovelovelovelovelovelovelovelovelovelovelove\n");
 
    }
 
    for(i=0;i<5;i++)    
    {
        y = 50;
        y = y - i*2;
        n++;
        for (k = 0; k < n; k++)    //��ÿһ�е���ʼλ���ȴ�ӡ�ո�
        {
            printf(" ");
        }
            while(1)     //�ո�����ӡlove������Ҫע��love��ʹû��ӡ�꣬ҲҪ����
            {
                if (x < y)
                {
                    printf("l");
                    y--;
                }
                else
                    break;
                if (x < y)
                {
                    printf("o");
                    y--;
                }
                else
                    break; if (x < y)
                {
                    printf("v");
                    y--;
                }
                    else
                    break; if (x < y)
                {
                    printf("e");
                    y--;
                }
                    else
                    break;
            }
        printf("\n");
    }
 
 
    //������Ĳ��֣���������ͬ�ϣ�û����һ���ַ�һ������Ϊ�����п�ʼ�������ո�
    for (i = 0,n=3; i < 10; i++)
    {
        y = 37;
        y = y - i * 4;
        n++;
        for (k = 0; k < n; k++)
        {
            printf("  ");
        }
        while (1)
        {
            if (x < y)
            {
                printf("l");
                y--;
            }
            else
     
