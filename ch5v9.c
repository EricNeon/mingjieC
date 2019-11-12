/*
练习5-9.
读取分数，横向列出数字的分布。
*/
 
#include <stdio.h>

#define NUMBER 80  //人数上限

int main(void)
{
    int i, j, max;
    int num; //人数
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

    max = distr[0];

    for (i = 0; i <= 9; i++) {   
        if(max < distr[i])
            max = distr[i];
//    putchar(' ');
    }


    for (j = max; j >0; j--){
        for (i = 0; i < 11; i++){
            if (distr[i] >= j)
                printf(" * ");
            else
                printf("   ");
        }
        putchar('\n');
    }
    putchar('\n');
    printf("------------------------------------------\n");
    for (i = 0; i <= 10; i++){ 
        printf("%3d", i * 10); //分数区间
//        putchar('\n');
    }
    

    return 0;
}

/*
请输入学生人数：15
请输入15人的分数。
 1号：17
 2号：38
 3号：100
 4号：95
 5号：23
 6号：62
 7号：77
 8号：45
 9号：69
10号：81
11号：83
12号：51
13号：42
14号：36
15号：60

---分布图---
                   *
          *  *     *     *
    *  *  *  *  *  *  *  *  *  *

---------------------------------
  0 10 20 30 40 50 60 70 80 90 100
*/