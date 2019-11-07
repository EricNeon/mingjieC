/*
练习4-7.
列出该数以内所有的2的乘方，用while语句。
*/

#include <stdio.h>

int main(void)
{   
    int i,no;
    
    printf("请输入一个正整数：");
    scanf("%d", &no);

    i = 1; //第一个数
    while (2*i < no){ 
        printf("%d ", 2*i);
        i=i*2;
    }
    printf("\n");


    while (no <= 0) {
        break;
    }
    return 0;
}