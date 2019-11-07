/*
练习3-4.
比较两数的大小。
*/

#include <stdio.h>

int main(void)
{
    int A, B;

    puts("请输入两个整数。");
    printf("整数A:");scanf("%d", &A);
    printf("整数B:");scanf("%d", &B);

    if (A == B)
        puts("A和B相等。");
    else if (A > B)
        puts("A大于B。");
    else 
        puts("A小于B。");

    return 0;
}