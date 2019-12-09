/*
练习6-10.
创建一个函数，对元素个数为n的int型数组v2进行倒序排列,并将结果保存在v1中。
*/

#include <stdio.h>

#define NUMBER 6  //定义一个数量

void intary_rcpy(int v1[],const int v2[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        v1[i] = v2[n - 1 - i];

}

int main(void)
{
    int i;
    int v1[NUMBER];
    int v2[NUMBER];
    
    printf("请输入数组v2的值。\n", NUMBER);
    
    for (i = 0 ; i < NUMBER; i++){
        printf("第%d个：", i); scanf("%d", &v2[i]);
    }

//下面进行倒序排列    
    intary_rcpy(v1, v2, NUMBER);

//下面显示结果
    puts("倒序后的v1的值。");
    for (i = 0; i < NUMBER; i++)
        printf("v1[%d] = %d\n", i, v1[i]);
    
    return 0;
}

/*
请输入数组v2的值。
第0个：11
第1个：22
第2个：33
第3个：44
第4个：55
第5个：66
倒序后的v1的值。
v1[0] = 66
v1[1] = 55
v1[2] = 44
v1[3] = 33
v1[4] = 22
v1[5] = 11

*/