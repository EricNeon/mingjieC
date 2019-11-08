/*
练习4-21.
输入一个数值，打印一个正方形。
*/
 
#include <stdio.h>

int main(void)
{
    int len, i, j;

    puts("生成一个正方形");
    printf("正方形有几层："); scanf("%d",&len);

    for (i = 1; i <= len; i++){
        for(j = 1; j <= len; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}