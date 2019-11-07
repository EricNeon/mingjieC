/*
练习3-3.
整数的绝对值。
*/

#include <stdio.h>

int main(void)
{
    int A;

    printf("请输入一个整数：");
    scanf("%d", &A);
    
    if (A == 0)
        puts("绝对值是：0。");
    else if (A > 0)
        printf("绝对值是：%d。", A);
    else if ( A < 0)  //if (A<0)可以省略
        printf("绝对值是：%d。", -A);

    return 0;
}