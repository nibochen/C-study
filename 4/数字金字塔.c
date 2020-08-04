#include <stdio.h>
void pyramid(int n)
{
    int h, i;
    for (i = 1; i <= n; i++)
    {//从第一行开始
        for (h = 0; h < n - i; h++)
        {//打印空格
            printf(" ");
        }
        for ( h = 0; h <i; h++)
        {//打印数字
            printf(" %d", i);
        }
        printf("\n");//换行
    }
}

int main()
{
    int q;
    scanf("%d", &q);
    pyramid(q);
    return 0;
}