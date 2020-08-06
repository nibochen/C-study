/*
习 5-8

编写一段程序，逆向显示代码清单5-12的分布图(即按照0~9、10〜19、...、100的顺序显示)。
*/
#include <stdio.h>

#define NUMBER 80    /*人数上限*/

int main(void)
{
    int i, j;
    int num;              /*实际的人数*/
    int tensu[NUMBER];    /*学生的分数*/
    int bunpu[11] = {0};  /*分布图*/

    printf("请输入学生人数：");
    do {
        scanf("%d", &num);
        if (num < 1 || num > NUMBER)
            printf("请输入1-%d的数：", NUMBER);
    } while (num < 1 || num > NUMBER);
    
    printf("请输入%d人的分数。\n", num);

    for (i = 0; i < num; i++)
    {
        printf("%2d号:", i + 1);
        do {
            scanf("%d", &tensu[i]);
            if (tensu[i] < 0 || tensu[i] > 100)
                printf("请输入1-100的数：");
        } while (tensu[i] < 0 || tensu[i] > 100);
        bunpu[tensu[i] / 10]++;
    }
   puts("\n---分布图---\n");

    for (i = 0; i <=9; i++)
    {
        printf("%2d-%2d:", i * 10, i * 10 + 9);
        for (j = 0; j < bunpu[i]; j++)
            putchar('*');
        putchar('\n');
    }
    printf("  100:");
    for (j = 0; j < bunpu[10]; j++)
        putchar('*');
    putchar('\n');

    return 0;
}