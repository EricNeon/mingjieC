/*
练习4-8.
输入一个整数，连续显示出该整数个*。
*/

#include <stdio.h>

int main(void)
{   
    int no;
    
    printf("请输入一个正整数：");
    scanf("%d", &no);

    while (no-- >= 1) {
        putchar('*');
        putchar(' '); //一个空格
    }
    putchar('\n');

    while (no < 1) {
        break;
    }
    return 0;
}