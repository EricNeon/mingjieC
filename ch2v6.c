/*
练习2-6.
计算标准体重。
*/

#include <stdio.h>

int main(void)
{
    double high, weight;
    
    printf("请输入您的身高:");scanf("%lf", &high);
    
    weight = (high-100) * 0.9;
    
    printf("您的身高是：%.2f\n",high);
    printf("您的标准体重是%.2f公斤。\n", weight);

    return 0;
}