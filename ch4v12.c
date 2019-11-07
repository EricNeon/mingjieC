/*
练习4-12.
输入一个整数，打印其位数。
*/

#include <stdio.h>

int main(void)
{   
    int no;
    int cnt = 0;
    do{
        printf("请输入一个正整数：");
        scanf("%d", &no);

        if (no <= 0)
            puts("\a请不要输入非正整数。");
    } while(no <= 0);

    /*no比0大时*/
    printf("%d的位数是", no);
    while (no > 0) {
        no /= 10;
        cnt++;
    }
    printf("%d。\n", cnt);

    return 0;
}