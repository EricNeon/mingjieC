/*
练习4-22.
输入两个数值，打印一个矩形。
*/
 
#include <stdio.h>

int main(void)
{
    int len1, len2, l, h; //l为长度，h为高度
    int i, j;

    puts("我们来画一个长方形。");
    printf("一边："); scanf("%d", &len1);
    printf("另一边："); scanf("%d", &len2);

    if (len1 > len2) {
        l = len1;
        h = len2;
    }
    else { 
        l = len2;
        h = len1;
    }

    for (i = 1; i <= h; i++){
        for(j = 1; j <= l; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}