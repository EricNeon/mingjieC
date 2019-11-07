/*
练习3-9.
选出三个数中最小值，用条件运算符。
*/

#include <stdio.h>

int main(void)
{
    int a,b,c;

    puts("请输入三个整数。");
    printf("整数a:");scanf("%d", &a);
    printf("整数b:");scanf("%d", &b);
    printf("整数c:");scanf("%d", &c);

    if (a == b && b == c)
        puts("三个数值相等。");
    else if (a == b || b==c || a==c)
        puts("有两个值相等。");
    else
        puts("三个值各不相同。");

    return 0;
}