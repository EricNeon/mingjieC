/*
练习3-2.
判断整数的符号。
*/

#include <stdio.h>

int main(void)
{
    int A;

    printf("请输入一个整数：");
    scanf("%d", &A);
    
    if (A == 0)
        puts("该数为0。");
    else if (A > 0)
        puts("该数是正数。");
    else if ( A < 0)  //if (A<0)可以省略
        puts("该数是负数。");

    return 0;
}