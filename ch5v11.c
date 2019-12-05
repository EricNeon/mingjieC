/*
练习5-11.
输入并显示6名学生2门课的分数，总分及平均分。
*/
 

#include <stdio.h>

#define STU_NUM 6 //定义学生人数

int main(void)
{
    int i, j;
    int score[STU_NUM][2];  //成绩二维数组，人数6，科目2
    int lan_sum = 0; //语文总分
    int lan_avg = 0; //语文平均分
    int mas_sum = 0; //数学总分
    int mas_avg = 0; //数学平均分

    for (i = 0; i < STU_NUM; i++) {

        j = 0;

        printf("学生%d的语文分数是：",i + 1);
        scanf("%d",&score[i][j]);   
        lan_sum += score[i][j];

        printf("数学分数是：");
        scanf("%d", &score[i][j+1]);
        mas_sum += score[i][j+1];
    }

    printf("---------------------------\n");

    lan_avg = lan_sum / STU_NUM;
    mas_avg = mas_sum / STU_NUM;
    
    printf("语文总分：%d\n",lan_sum);
    printf("数学总分：%d\n",mas_sum);
    printf("语文平均分：%d\n", lan_avg);
    printf("语文平均分：%d\n", mas_avg);

    for (i = 0; i < STU_NUM; i++)
    {
        printf("学生%d总分为:%d,平均分为:%d。\n", i + 1, score[i][0]+score[i][1], (score[i][0] + score[i][1]) / 2);
    }

    return 0;
}
/*
学生1的语文分数是：89
数学分数是：88
学生2的语文分数是：99
数学分数是：98
学生3的语文分数是：87
数学分数是：89
学生4的语文分数是：77
数学分数是：88
学生5的语文分数是：66
数学分数是：66
学生6的语文分数是：50
数学分数是：50
____________________
语文总分：468
数学总分：479
语文平均分：78
语文平均分：79
学生1总分为177,平均分为88。
学生2总分为197,平均分为98。
学生3总分为176,平均分为88。
学生4总分为165,平均分为82。
学生5总分为132,平均分为66。
学生6总分为100,平均分为50。

*/