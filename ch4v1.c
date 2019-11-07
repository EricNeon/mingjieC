/*
练习4-1.
判断整数的符号，用do循环。
*/

#include <stdio.h>

int main(void)
{
    int t, retry;

    do{
        printf("请输入一个整数：");
        scanf("%d", &t);
    
        if (t == 0)
            puts("该数为0。");
        else if (t > 0)
            puts("该数是正数。");
        else if ( t < 0)  //if (A<0)可以省略
            puts("该数是负数。");
        printf("是否继续？<yes...1 or no...9>:");
        scanf("%d", &retry);
    } while (retry == 1);
    
    return 0;
}