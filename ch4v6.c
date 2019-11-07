/*
练习4-6.
列出该数以内所有的偶数，用while语句。
*/

#include <stdio.h>

int main(void)
{   
    int i,no;
    
    printf("请输入一个正整数：");
    scanf("%d", &no);

    i = 1; //第一个数
    while (i*2 < no){ 
        printf("%d ", i*2);
        i++;
    }
    printf("\n");


    while (no <= 0) {
        printf("");
        return 0;
    }
    return 0;
}