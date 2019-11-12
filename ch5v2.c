/*
练习5-2.
依次给一个数组从大到小赋值。
*/
 
#include <stdio.h>

int main(void)
{

    int i;
    int v[5];

    for (i = 0; i < 5; i++){
        v[i] = 5 - i ;
        printf("v[%d] = %d\n", i, v[i]);
    }

    return 0;
}
/*
v[0] = 5
v[1] = 4
v[2] = 3
v[3] = 2
v[4] = 1
*/