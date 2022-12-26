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
        for (k = 0; k < n; k++)    //在每一行的起始位置先打印空格
        {
            printf(" ");
        }
            while(1)     //空格后面打印love，但是要注意love即使没打印完，也要换行
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
 
 
    //最下面的部分，具体内容同上，没和上一部分放一起是因为从这行开始多两个空格
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
     
