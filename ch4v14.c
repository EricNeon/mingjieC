/*
练习4-14.
输入一个整数，循环打印这个数位的124567890。
*/
 
#include <stdio.h>

int main(void)
{
    int n, x;

    printf("请输入一个整数：");
    scanf("%d",&n);

    for (x = 1; x <= n; x++){
        printf("%d",x%10); //取余数作为当前值
    }

    return 0;
}
/*

*/