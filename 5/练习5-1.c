/*
练习 5-1

对代码清单5-3中的程序进行修改，从头顺次为数组中的元素赋值0、1、2、3、4。
#include <stdio.h>

int main(void)
{
    int i;
    int v[5];

    for (i = 0; i < 5; i++)
        v[i] = i + 1;

    for (i = 0; i < 5; i++)
        printf("v[%d] = %d\n", i, v[i]);

    return 0;
}
*/
#include <stdio.h>

int main(void)
{
    int i;
    int v[5];

    for (i = 0; i < 5; i++)
        v[i] = i;

    for (i = 0; i < 5; i++)
        printf("v[%d] = %d\n", i, v[i]);

    return 0;
}
