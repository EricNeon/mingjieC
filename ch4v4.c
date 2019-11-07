/*
练习4-4.
倒计数，用while语句。
*/

#include <stdio.h>

int main(void)
{   
    int no;
    
    printf("请输入一个正整数：");
    scanf("%d", &no);

    while (no > 0) 
        printf("%d ", no--);
    
    printf("\n");


    while (no <= 0) {
        printf("");
        return 0;
    }
    return 0;
}