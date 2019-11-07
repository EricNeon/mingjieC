/*
练习1-9.
获取三个数字，并且计算它们的和。
*/

#include <stdio.h>

int main(void)
{
    int x,y,z;
    int w;
    puts("请输入三个整数。");
    printf("整数1："); scanf("%d", &x);
    printf("整数2："); scanf("%d", &y);
    printf("整数3："); scanf("%d", &z);
    w = x + y + z;

    printf("它们的和是：%d。\n", w);

    return 0;
}