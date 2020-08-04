/*4-1

代码清单3-9是判断所输入的整数值的符号的程序，
请将其改写为可以将输入显示这一过程循环任意次。

判断输入的整数的符号
#include <stdio.h>

int main(void)
{
    int no;

    printf("请输入一个整数：");
    scanf("%d", &no);

    if (no == 0)
        puts("该整数为0");
    else if (no > 0)
        puts("该整数为正数");
    else
        puts("该整数为负数");

    return 0;
}
*/
#include <stdio.h>

int main(void)
{int retry;
    int no;
do
{
    printf("请输入一个整数：");
    scanf("%d", &no);

    if (no == 0)
        puts("该整数为0");
    else if (no > 0)
        puts("该整数为正数");
    else 
    {
        puts("该整数为负数");
    }
     printf("是否继续执行？【Yes……0/NO……9】：");
        scanf("%d", &retry);
    } while (retry == 0);
       

return 0;
    

    
}

