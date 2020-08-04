/*
练习 4-19

编写一段程序，对代码清单4-15进行修改，在显示所输入的整数值的所有约数之后，显示约数的个数。

整数值：4
1
2
4
约数有3个。
#include <stdio.h>

int main(void)
{
    int i , n;

    printf("整数值：");
    scanf("%d", &n);

    for (i = 1; i <= n; i ++) {
        if (n % i == 0)
            printf("%d ", i);
    }
    putchar('\n');

    return 0;
}
*/
#include <stdio.h>

int main(void)
{
    int i , n;
int x=0;
    printf("整数值：");
    scanf("%d", &n);

    for (i = 1; i <= n; i ++) {
        if (n % i == 0){
            x++;
            printf("%d ", i);}
            
    }
    putchar('\n');
        printf("约数有%d个。\n",x);

    return 0;
}