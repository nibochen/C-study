/*
练习 5-2

对代码清单5-3中的程序进行修改，从头顺次为数组中的元素赋值5、4、3、2、1。
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
    int x=0;
    for (i = 5; i >=1; i--){
   
        v[x] = i ;
        x++;
    }

    for (i = 0; i < 5; i++)
        printf("v[%d] = %d\n", i, v[i]);

    return 0;
}