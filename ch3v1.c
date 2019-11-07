/*
练习3-1.
判断一个数是不是另一个数的约数。
*/

#include <stdio.h>

int main(void)
{
    int A,B;

    puts("请输入两个整数：");
    
    printf("整数A:");scanf("%d", &A);
    printf("整数B:");scanf("%d", &B);
    
    if (A % B)
        puts("B不是A的约数。");
    else
        puts("B是A的约数。");

    return 0;
}