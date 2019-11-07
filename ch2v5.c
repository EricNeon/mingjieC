/*
练习2-5.
计算两个浮点型数值的百分比。
*/

#include <stdio.h>

int main(void)
{
    int a,b;

    puts("请输入两个整数：");
    printf("整数a:");scanf("%d", &a);
    printf("整数b:");scanf("%d", &b);

    printf("a是b的%lf%%。\n", (double) a / b * 100);
    return 0;
}