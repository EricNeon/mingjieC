/*
练习1-8.
获取两个数字，并且计算它们的乘积。
*/

#include <stdio.h>

int main(void)
{
    int x,y;
    int xy;
    puts("请输入两个整数。");
    printf("整数1："); scanf("%d", &x);
    printf("整数2："); scanf("%d", &y);
    xy = x * y;

    printf("它们的乘积是：%d\n", xy);

    return 0;
}