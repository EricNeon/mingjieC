/*
练习5-7.
读取输入的几个数值，并用{}把数值框起来，数值之间用“，”号分隔。
使用宏定义个数
*/
 
#include <stdio.h>

#define num b

int main(void)
{
    int i,b;//个数
    int v[i];

    printf("数据个数：");
    do {
        scanf("%d", &num);
        if (num <= 0)
            printf("\a请重新输入一个大于0的数:");
    } while (num <=0);

    for (i = 0; i < num; i++){
        printf("%d号：", i + 1);
        scanf("%d", &v[i]);
    }

    putchar('{');
    for (i = 0; i < num-1; i++){
        printf("%d, ", v[i]);
    }

    if (i = num-1)  //最后一个数值后不需要逗号
        printf("%d", v[i]);

    putchar('}');

    return 0;
}

/*
数据个数：4
1号：23
2号：74
3号：9
4号：835
{23, 74, 9, 835}

*/