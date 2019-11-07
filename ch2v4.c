/*
练习2-4.
对int类型（整型）和double类型（浮点型）进行四则运算。
*/

#include <stdio.h>

int main(void)
{
    int n1,n2,n3,n4;
    double x1,x2,x3,x4;

    puts("整型的四则运算：");
    n1 = 2+2;
    n2 = 3456 - 324;
    n3 = 897 * 34;
    n4 = 198.4 / 14;

    printf("n1:%d\nn2:%d\nn3:%d\nn4:%d\n",n1,n2,n3,n4);

    puts("浮点型的四则运算：");
    x1 = 5/2;
    x2 = 5.0 / 2.0;
    x3 = 234.13 * 32;
    x4 = 12.3 * 23.45;

    printf("x1:%.2f\nx2:%.2f\nx3:%.3f\nx4:%.4f\n",x1,x2,x3,x4);
    return 0;
}