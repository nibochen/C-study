/*练习 10-5●

如果用ary_set(&a[2],2,99)调用代码清单10-11中的ary_set函数会怎样呢?请试着执行一下并探讨其结果。
*/
/*
数组的传递
*/
#include <stdio.h>

/*将数组v的开头的n个元素赋值val*/
void ary_set(int v[], int n, int val)
{
    int i;
    for (i = 0; i < n; i++)
        v[i] = val;
}

int main(void)
{
    int i;
    int a[] = {1, 2, 3, 4, 5};

    ary_set(&a[2],2,99);

    for (i = 0; i < 5; i++)
        printf("a[%d] = %d\n", i, a[i]);

    return 0;
}