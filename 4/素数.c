#include <stdio.h>
int main()
{
    int i, m;
    scanf("%d", &m);
    for (i = 2; i <= m - 1; i++)
    {
        if (m % i == 0)
        {
            //m能被i整除，则不是素数
            break;
        }
    }

    if (i == m)
    {
        printf("是素数");
    }
    else
    {
        printf("不是素数");
    }
}