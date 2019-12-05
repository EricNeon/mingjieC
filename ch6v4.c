/*
练习6-4.
创建一个函数，返回int型整数的4次幂。
*/
 

#include <stdio.h>

int sqr (int x)
{
    return x*x;
}

int pow4 (int x)
{
    return sqr(x)*sqr(x);
}

int main(void)
{
    int x;

    puts("请输入一个整数。");
    printf("整数x：");scanf("%d", &x);

    printf("%d的4次幂值是%d。\n", x, pow4(x));

    return 0;
}

/*
请输入一个整数。
整数x：9
9的4次幂值是6561。

*/