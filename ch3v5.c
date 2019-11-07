/*
练习3-4.
确认判断表达式的值为0和1。
*/

#include <stdio.h>

int main(void)
{
    int a,b,c,N,M,X;
    
    a=b=c=10;
    N=a==b;
    printf("%d\n",N);

    M=a<b;
    printf("%d\n",M);

    X=c<a;
    printf("%d\n",X);

    return 0;
}