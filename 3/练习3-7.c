/*3-7

编写一段程序，计算出输入的四个整数中的最大值并显示。

※注意使用if语句。*/
#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("请输入A:");
    scanf("%d", &a);
    printf("请输入B:");
    scanf("%d", &b);
    printf("请输入C:");
    scanf("%d", &c);
    printf("请输入D:");
    scanf("%d", &d);
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("A最大");
            }
            else
            {
                printf("D最大");
            }
        }
        else
        {
            if (c > d)
            {
                printf("C最大");
            }
            else
            {
                printf("D最大");
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                printf("B最大");
            }
            else
            {
                printf("D最大");
            }
        }
        else
        {
            if (c > d)
            {
                printf("C最大");
            }
            else
            {
                printf("D最大");
            }
        }
    }
}