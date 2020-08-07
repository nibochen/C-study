/*
练习 5-10

编写一段程序，求4行3列矩阵和3行4列矩阵的乘积。各构成元素的值从键盘输入
*/
#include<stdio.h>

int main(void)
{
    int i, j, k;
    int a[4][3];
    int b[3][4];
    int c[4][4];

    printf("请输入4行3列矩阵的元素的值:。\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
     printf("请输入3行4列矩阵的元素的值:。\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < 4; i++)   /* 计算矩阵的乘积 */
    {
        for (j = 0; j < 4; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                c[i][j] += a[i][k] *b[k][j];
            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("c[%d][%d] = %d\n", i, j, c[i][j]);
        }
    }

    return 0;
}