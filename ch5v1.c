/*
练习5-1.
依次给一个数组赋值。
*/
 
#include <stdio.h>

int main(void)
{

    int i;
    int v[5];

    for (i = 0; i < 5; i++){
        v[i] = i ;
        printf("v[%d] = %d\n", i, v[i]);
    }     
    
    return 0;
}
/*
v[0] = 0
v[1] = 1
v[2] = 2
v[3] = 3
v[4] = 4
*/