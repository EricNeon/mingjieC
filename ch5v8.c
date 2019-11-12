/*
练习5-8.
读取分数，并列出数字的分布。
*/
 
#include <stdio.h>

#define NUMBER 80  //人数上限

int main(void)
{
    int i,j;
    int num;  //学生人数
    int result[NUMBER]; //学生的分数
    int distr[11] = {0}; //分布图

    printf("请输入学生人数：");
    do {
        scanf("%d", &num);
        if (num <= 1 || num > NUMBER)
            printf("\a请重新输入一个1~%d的数:", NUMBER);
    } while (num <= 1 || num > NUMBER);

    printf("请输入%d人的分数。\n", num);

    for (i = 0; i < num; i++){
        printf("%2d号：", i + 1);
        do {
            scanf("%d", &result[i]);
            if (result[i] < 0 || result[i] > 100)
                printf("\a请重新输入一个1-100的数：");
        }while (result[i] < 0 || result[i] > 100);
        distr[result[i] / 10]++;
    }

    puts("\n---分布图---");


    for (i = 0; i <= 9; i++){    //不到100分
        printf("%3d - %3d:", i* 10, i * 10 + 9);
        for (j = 0; j < distr[i]; j++)
            putchar('*');
        putchar('\n');
    }
    printf("      100:");
    for (j = 0; j < distr[10]; j++) //100分
        putchar('*');
    putchar('\n');

    return 0;
}

/*
请输入学生人数：15
请输入15人的分数。
 1号：17
 2号：38
 3号：100
 4号：34
 5号：22
 6号：87
 7号：66
 8号：56
 9号：90
10号：97
11号：76
12号：23
13号：51
14号：2
15号：4

---分布图---
  0 -   9:**
 10 -  19:*
 20 -  29:**
 30 -  39:**
 40 -  49:
 50 -  59:**
 60 -  69:*
 70 -  79:*
 80 -  89:*
 90 -  99:**
      100:*
*/