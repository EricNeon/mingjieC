/*
练习4-16.
输入一个数，显示小于此数的所有奇数。
*/
 
#include <stdio.h>

int main(void)
{
    int i,n;

    printf("整数值："); scanf("%d",&n);

    for (i = 1; i <= n; i++)
        if (i % 2)
            printf("%d ", i);

    putchar('\n');

    return 0;
}
/*
整数值：15
1 3 5 7 9 11 13 15
*/