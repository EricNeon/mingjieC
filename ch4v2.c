/*
练习4-2.
计算两数之间所有整数的和，用do循环。
*/

#include <stdio.h>

int main(void)
{   
    int retry;
    do{
        int a,b,mix,max,t,sum;
        puts("请输入两个整数：");
        printf("整数a:");scanf("%d", &a);
        printf("整数b:");scanf("%d", &b);
    
        if (a > b){
            mix = b;
            max = a;
        }
        else{
            mix = a;
            max = b;
        }
        t = max - mix;
        sum = (a + b) * (t + 1) / 2;

        printf("大于等于%d小于等于%d的所有整数的和是%d。\n",mix,max,sum);
        printf("继续？<Y...1/N...9>:");scanf("%d",&retry);
    } while (retry == 1);
    

    return 0;
}