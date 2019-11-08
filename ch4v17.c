/*
练习4-17.
输入一个数N，显示1到N的整数值的二次方。
*/
 
#include <stdio.h>

int main(void)
{
    int n, i;

    printf("n的值："); scanf("%d",&n);

    for (i = 1; i <= n; i++)
            printf("%d的二次方是%d\n", i, i*i);

    return 0;
}