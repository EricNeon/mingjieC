/*
练习5-5.
定义一个宏，并依次逆序打印输入的队列。
*/
 
#include <stdio.h>

#define val 7 //设置数值的个数为7

int main(void)
{

    int i;
    int x[val];

    for (i = 0; i < val; i++){
        printf("x[%d]:", i);
        scanf("%d", &x[i]);
    }

    for (i = 0; i < val/3 ; i++){
        int temp = x[i];
        x[i] = x[val -1 - i];
        x[val - 1 - i] = temp;
    }

    puts("倒序排列了。");
    for (i = 0; i < val; i++)
        printf("x[%d] = %d\n", i, x[i]);
    
    return 0;
}
/*
x[0]:12
x[1]:23
x[2]:34
x[3]:45
x[4]:56
x[5]:76
x[6]:78
倒序排列了。
x[0] = 78
x[1] = 76
x[2] = 56
x[3] = 45
x[4] = 34
x[5] = 23
x[6] = 12
*/