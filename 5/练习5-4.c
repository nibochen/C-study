/*
练习 5-4

对代码清单5-6中的程序进行修改，将数组a中的元素按照倒序复制到数组b中。

#include <stdio.h>

int main(void)
{
    int i;
    int a[5] = {17, 23, 36};
    int b[5];

    for (i = 0; i < 5; i++)
        b[i] = a[i];

    puts("  a   b");
    puts("---------");
    for (i = 0; i < 5; i++)
        printf("%4d%4d\n", a[i], b[i]);

    return 0;
}
*/
#include <stdio.h>

int main(void)
{
    int i;
    int a[5] = {17, 23, 36};
    int b[5];
    int x=4;
    for (i = 0; i <5; i++){
        b[i] = a[x];
        x--;
    }
    puts("  a   b");
    puts("---------");
    for (i = 0; i < 5; i++)
        printf("%4d%4d\n", a[i], b[i]);

    return 0;
}