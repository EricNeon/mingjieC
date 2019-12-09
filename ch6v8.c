/*
练习6-8.
创建一个函数，返回元素个数为n的int型数组v中的最小值。
*/
 

#include <stdio.h>

#define NUMBER 5  //定义一个数量

//筛选最小值，用const来防止修改
int min_of(const int v[], int n)
{
    int i;
    int min = v[0];

    for (i = 1; i < n; i++)
        if (v[i] < min)
            min = v[i];
    return min;
}

int main(void)
{
    int i, min_mas;
    int mas[NUMBER];
    
    printf("请输入%d名学生的数学成绩。\n", NUMBER);
    
    for (i = 0 ; i < NUMBER; i++){
        printf("第%d位：", i+1); scanf("%d", &mas[i]);
    }
    
    min_mas = min_of(mas, NUMBER);

    printf("数学最低分是：%d\n", min_mas);
    
    return 0;
}

/*
请输入5名学生的数学成绩。
第1位：66
第2位：99
第3位：156
第4位：685
第5位：21
数学最低分是：21

*/