/*
练习4-18.
打印相当于输入数值个数的*号，每行5个。
*/
 
#include <stdio.h>

int main(void)
{
    int n, i, t,j;
//    int t = 5; //作为列数
    int m = '*';
    printf("显示多少个*："); scanf("%d",&n);

    for (i = 1; i <= n / 5  ; i++)
        printf("*****\n");

    for(j = 1;j <= n % 5; j++)
        printf("*");

    return 0;
}