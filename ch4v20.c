/*
练习4-22.
画一个9×9乘法口诀表。
*/
 
#include <stdio.h>

int main(void)
{

    int i, j;

    puts("        --乘法口诀表--    "); //打印一个表头

    putchar(' ');
    putchar('|');
    for (i = 1; i <= 9; i++)
        printf("%3d", i);

    putchar('\n');
    for (i = 1; i <=30; i++)
        putchar('-');
    putchar('\n');

//打印一个乘法口诀表
    for (i = 1; i <= 9; i++){
            printf("%d", i);
            putchar('|');
        for(j = 1; j <= 9; j++){

            printf("%3d",  i*j);
        }
        putchar('\n');
    }

    return 0;
}