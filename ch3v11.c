/*
练习3-11.
选出两个数的差，用if语句。
*/

#include <stdio.h>

int main(void)
{
    int n1,n2,w;

    puts("请输入两个整数。");
    printf("整数1:");scanf("%d", &n1);
    printf("整数2:");scanf("%d", &n2);
    

    if (n1 > n2)
        w = n1 > n2 ? n1 - n2 : n2 - n1;
    if (w <= 10)
        puts("它们的差小于等于10。");
    else
        puts("它们的差大于等于11。");

    return 0;
}