/*
练习3-13.
用switch方法判断月份的季节。
*/

#include <stdio.h>

int main(void)
{
    int month;

    printf("请输入月份:");
    scanf("%d", &month);

    month= (month >= 1 && month <=12) ? month : printf("请重新输入！");

    switch (month) {
        case 3 : 
        case 4 : 
        case 5 : printf("%d是春季。\n", month); break;
        case 6 : 
        case 7 : 
        case 8 : printf("%d是夏季。\n", month); break;
        case 9 : 
        case 10 : 
        case 11 : printf("%d是秋季。\n", month); break;
        case 12 : 
        case 1 : 
        case 2 : printf("%d是冬季。\n", month); break;
    }

    return 0;
}