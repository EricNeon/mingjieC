/*
练习4-25.
画一个倒立金字塔。
*/
 
#include <stdio.h>

int main(void)
{

    int len, i, j, no;
    
    puts("让我们来画一个向下的金字塔。");
    printf("金字塔有几层：");  scanf("%d",&len);
    
    no = len; //最终要打印数字就是塔的总高度

    for(i = 1; i <= len; i++){
        for (j = 1; j < i; j++)
            printf("-"); //打印“-”的空缺位。
    
        for (j = 0; j < 2*no-1; j++)
            printf("%d",i);
            
        no--;//让数字递减
        putchar('\n'); 
    }

    return 0;
}