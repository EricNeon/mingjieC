/*
练习6-1.
创建一个函数，返回两个数中较小的一数的值。
*/
 

#include <stdio.h>

int min2 (int a, int b)
{
    int min = a;

    if (b < a)
        min = b;
    return min;
}


int main(void)
{
    int a, b;

    puts("请输入两个整数。");
    printf("整数a：");scanf("%d", &a);
    printf("整数b：");scanf("%d", &b);

    printf("较小的值是%d。\n", min2(a, b));

    return 0;
}

/*
请输入两个整数。
整数a：12358
整数b：9542
较小的值是9542。
*/