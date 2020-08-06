/*
练习 4-18

编写一段程序，输入一个整数值，显示该整数个'*'。每显示5个就进行换行。

显示多少个*:12
*****
*****
**
*/
#include <stdio.h>
int main(void)
{
    int no;
    printf("请输入一个正整数：");
    scanf("%d", &no);
    if (no==0)
    {
        return 0;
    }
    
    for (int i = 1; i <= no; i++)
    {
        printf("*");
        if (i%5==0)
        {
            printf("\n");
        }
    }

    printf("\n");


}