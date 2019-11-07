/*
练习4-10.
输入一个整数，直列打印出该整数个*号，并用空行分隔。
*/

#include <stdio.h>

int main(void)
{   
    int no;
    
    printf("请输入一个正整数：");
    scanf("%d", &no);

    while (no-- >= 1) {
        printf("*\n");
        putchar('\n');  //空行
    }
    putchar('\n');

    while (no < 1) {
        break;
    }
    return 0;
}