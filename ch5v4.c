/*
练习5-4.
依次逆序把一个数组复制到另一个数组中。
*/
 
#include <stdio.h>

int main(void)
{

    int i;
    int a[5] = {17, 23, 36};
    int b[5];

    for (i = 0; i < 5; i++)
        b[i] = a[4-i];//b数组的最大项i=4

    puts("  a    b ");
    puts("----------");
    for (i = 0; i <5; i++)
        printf("%4d%4d\n", a[i], b[i]);
    

    return 0;
}
/*
  a    b
----------
  17   0
  23   0
  36  36
   0  23
   0  17
*/