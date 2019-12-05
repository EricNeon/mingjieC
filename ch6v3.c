/*
练习6-3.
创建一个函数，返回int型整数的立方。
*/
 

#include <stdio.h>

int cube (int x)
{
    return x*x*x;
}


int main(void)
{
    int x;

    puts("请输入一个整数。");
    printf("整数x：");scanf("%d", &x);

    printf("%d的立方值是%d。\n", x, cube(x));

    return 0;
}

/*
请输入一个整数。
整数x：15
15的立方值是3375。

*/