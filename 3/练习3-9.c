/*3-9

使用条件运算符替换练习3-6的程序中的if语句，实现同样的功能。*/
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("请输入A:");
    scanf("%d", &a);
    printf("请输入B:");
    scanf("%d", &b);
    printf("请输入C:");
    scanf("%d", &c);
    if (a < b && a < c)
    {
        printf("A最小");
    }
    else
    {
        if (b < a && b < c)
        {
            printf("B最小");
        }
        else
        {
            printf("C最小");
        }
    }
}
