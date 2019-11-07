/*
练习2-2.
获取两个数字，并且计算它们的和、乘积。
*/

#include <stdio.h>

int main(void)
{
    int x,y;
    puts("请输入两个整数。");
    printf("整数x："); scanf("%d", &x);
    printf("整数y："); scanf("%d", &y);
    printf("它们的和是：%d,积是：%d。\n", x + y , x * y);

    return 0;
}