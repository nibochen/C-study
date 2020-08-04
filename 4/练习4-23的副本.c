/*
练习 4-23

对代码清单4-18和代码清单4-19中的程序进行修改，分别显示出直角在左上方和右上方的等腰直角三角形(生成两个程序)。
*/

#include <stdio.h>

int main(void)
{
    int i, j, len;

    puts("生成直角在右上方的等腰直角三角形。");
    printf("短边：");
    scanf("%d", &len);
    int x = len;
    for (i = 0; i < len; i++)
    {
        for (j = i; j > 0; j--)
            putchar(' ');

        for (j = x; j != 0; j--)
        {
            printf("*");
        }
        x--;
        putchar('\n');
    }
}