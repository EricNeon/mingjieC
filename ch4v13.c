/*
练习4-13.
输入一个整数，打印从1到这个数的总和。
*/

#include <stdio.h>

int main(void)
{   
    int n,i;
    int sum = 0;
    printf("n的值：");
    scanf("%d", &n);

    for (i=1; i<=n; i++){
        sum += i;
    } 
    printf("1到%d的总和是%d。\n", n,sum);

    return 0;
}