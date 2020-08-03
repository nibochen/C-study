/*练习 3-2

请考虑一下，如果把代码清单3-9最后的else变为else if(n<0),结果会怎样呢
*/
/*
判断输入的整数的符号
*/
#include <stdio.h>

int main()
{
    int no;

    printf("请输入一个整数：");
    scanf("%d", &no);

    if (no == 0)
    {
        puts("该整数为0");
    }
    else
    {
        if (no > 0)
        {
            puts("该整数为正数");
        }
        else if (no < 0)
        {
            puts("该整数为负数");
        }
    }
}
//结果不变