/*
练习4-15.
打印一个体重对应身高的列表。
*/
 
#include <stdio.h>

int main(void)
{
    int h1, h2, t, i;
    double w;

    printf("开始数据(cm)："); scanf("%d",&h1);
    
    printf("结束数据(cm)："); scanf("%d",&h2);

    printf("间隔数值(cm)："); scanf("%d",&t);

    for (i = h1; i <= h2; i+=t){
        w = (i - 80) * 0.7;
        printf("%dcm    %.2fkg\n", i, w); 
    }

    return 0;
}
/*
开始数据(cm)：140
结束数据(cm)：210
间隔数值(cm)：5
140cm    42.00kg
145cm    45.50kg
150cm    49.00kg
155cm    52.50kg
160cm    56.00kg
165cm    59.50kg
170cm    63.00kg
175cm    66.50kg
180cm    70.00kg
185cm    73.50kg
190cm    77.00kg
195cm    80.50kg
200cm    84.00kg
205cm    87.50kg
210cm    91.00kg
*/