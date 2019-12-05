/*
练习6-2.
创建一个函数，返回三个数中最小的值。
*/
 

#include <stdio.h>

int mix3 (int a, int b, int c)
{
    int mix = a;

    if (b < a)
        mix = b;
    if (c < b)
        mix = c;
    return mix;
}


int main(void)
{
    int a, b, c;

    puts("请输入两个整数。");
    printf("整数a：");scanf("%d", &a);
    printf("整数b：");scanf("%d", &b);
    printf("整数c：");scanf("%d", &c);

    printf("最小的值是%d。\n", mix3(a, b, c));

    return 0;
}

/*
请输入两个整数。
整数a：678
整数b：765
整数c：666
最小的值是666。
*/