/*
练习 4-8

改写代码清单4-8的程序，当输入的值小于1时不输出换行符。
#include <stdio.h>

int main(void)
{
    int no;

    printf("请输入一个正数：");
    scanf("%d", &no);

    while (no-- > 0)
        putchar('*');
    putchar('\n');

    return 0;
}
*/
#include <stdio.h>

int main(void)
{
    int no;

    printf("请输入一个正数：");
    scanf("%d", &no);
if (no<1)
{
    return 0;
}
    while (no-- > 0)
        putchar('*');
    putchar('\n');

    return 0;
}