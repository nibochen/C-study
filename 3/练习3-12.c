/*3-12

对代码清单3-4中的程序进行修改，不使用if语句，而是改用switch语句来实现。*/
/*
输入的整数值是否为0
*/
#include <stdio.h>

int main(void)
{
    int num;

    printf("请输入一个整数：");
    scanf("%d", &num);

    switch (num)
    {
    case 0:
        printf("该整数是0\n");
        break;
    
    default:printf("该整数不是0\n");
        break;
    }
    return 0;
}