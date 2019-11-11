/*
练习4-24.
画一个金字塔。
*/
 
#include <stdio.h>

int main(void)
{

    int i, j, high,m;

    puts("让我们来画一个金字塔。"); 
    printf("金字塔有几层：");scanf("%d", &high);


    for (i = 1; i <= high; i++) {
        for (j = 1; j <= high-i; j++)
            putchar(' ');           
        for (m = 1; m <= (i-1)*2+1; m++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}
/*
让我们来画一个金字塔。
金字塔有几层：5
    *
   ***
  *****
 *******
*********
*/