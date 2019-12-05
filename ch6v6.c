/*
练习6-6.
创建一个函数，连续发出n次响铃。
*/
 

#include <stdio.h>
//#include <windows.h>

void alert (int n)
{
    while (n-- > 0)
    {
        //Beep( 523 , 200 ); 
        putchar('\a');
    }
}

int main(void)
{
    int n;

    printf("请输入响铃次数：");
    scanf("%d", &n);
    alert(n);

    return 0;
}

/*
请输入响铃次数：10

*/