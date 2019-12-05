/*
练习6-5.
创建一个函数，返回1到n之间所有整数的和。
*/
 

#include <stdio.h>

int sumup (int n)
{
    int i, sumup;
    sumup = 0;

    for (i = 1; i <= n; i++){
        sumup += i;
    }
    return sumup;
}

int main(void)
{
    int n;

    puts("请输入一个整数。");
    printf("整数n：");scanf("%d", &n);

    printf("1到%d的总和是%d。\n", n, sumup(n));

    return 0;
}

/*
请输入一个整数。
整数n：100
1到100的总和是5050。

*/