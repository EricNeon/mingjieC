/*
练习4-23B.
画一个直角在右上方的三角形。
*/
 
#include <stdio.h>

int main(void)
{

    int i, j, len;

    puts("生成一个直角在右上方的等腰直角三角形"); 
    printf("短边：");scanf("%d", &len);

    for (i = 1; i <= len; i++) {
        for (j = 1; j <= i-1; j++)
            putchar('-');//打印一个'-'的背景
        for (j = 0; j <= len-i ; j++) 
            putchar('*');
        putchar('\n');
    }

    return 0;
}