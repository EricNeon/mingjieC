/*
练习3-6.
选出三个数中最小值，用if语句。
*/

#include <stdio.h>

int main(void)
{
    int a,b,c,mix;

    puts("请输入三个整数。");
    printf("整数a:");scanf("%d", &a);
    printf("整数b:");scanf("%d", &b);
    printf("整数c:");scanf("%d", &c);

    mix = a;
    if (b < mix)
        mix = b;
    if (c < mix)
        mix = c;
    printf("最小值是%d。\n",mix);

    return 0;
}