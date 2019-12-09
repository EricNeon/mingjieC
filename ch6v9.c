/*
练习6-9.
创建一个函数，对元素个数为n的int型数组v进行倒序排列。
*/

#include <stdio.h>

#define NUMBER 6  //定义一个数量

void rev_intary(int v[], int n)
{
    int i, temp;

    for (i = 0; i < n / 2; i++){
        temp = v[i];
        v[i] = v[n - 1 - i];
        v[n - 1 - i] = temp;
    }
}

int main(void)
{
    int i;
    int v[NUMBER];
    
    printf("请输入%d个数值。\n", NUMBER);
    
    for (i = 0 ; i < NUMBER; i++){
        printf("第%d个：", i); scanf("%d", &v[i]);
    }
    
    rev_intary(v, NUMBER);

    puts("倒序排列了。");
    for (i = 0; i < NUMBER; i++)
        printf("v[%d] = %d\n", i, v[i]);
    
    return 0;
}

/*
请输入6个数值。
第0个：11
第1个：25
第2个：36
第3个：45
第4个：56
第5个：68
倒序排列了。
v[0] = 68
v[1] = 56
v[2] = 45
v[3] = 36
v[4] = 25
v[5] = 11

*/