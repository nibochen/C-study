/*
练习4-2

编写一段程序，读取两个整数的值，然后计算出它们之间所有整数的和。
*/
#include <stdio.h>
int he(int x1, int x2)
{
    if (x1 < x2)
    {
        int a;
        a = x1;
        x1 = x2;
        x2 = a;
    }

    int n;
    for (int i = x2; i < x1 - 1; i++)
    {
        n += i + 1;
    }
    return n;
}

int main()
{
    int a, b, c;
    scanf("%d%d", &a, &b);
    c = he(a, b);
    printf("%d", c);
}