/*
练习4-5.
从1开始递加数，用while语句。
*/

#include <stdio.h>

int main(void)
{   
    int i,no;
    
    printf("请输入一个正整数：");
    scanf("%d", &no);

    i = 1; //第一个数
    while (i <= no) 
        printf("%d ", i++);
    
    printf("\n");


    while (no <= 0) {
        printf("");
        return 0;
    }
    return 0;
}