/*
练习4-19.
输入一个数值，分行显示其所有的约数，并在最后统计个数。
*/
 
#include <stdio.h>

int main(void)
{
    int n, i;
    int t = 0;

    printf("整数值："); scanf("%d",&n);

    for (i = 1; i <= n; i++){
        if(n % i == 0){
            printf("%d\n",i);
            t++;
        }
    }
    printf("约数有%d个。", t);

    return 0;
}