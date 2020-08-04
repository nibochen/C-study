/*练习 4-4

对代码清单4-6的程序进行修改，使其

•递减到1而非递减到0。

•当输入的值小于0时，不进行换行。
#include <stdio.h>

int main(void)
{
    int no;

    printf("请输入一个正整数：");
    scanf("%d", &no);

    while (no >= 0)
        printf("%d ", no--);

    printf("\n");

    return 0;
}
*/
#include <stdio.h>

int main(void)
{
    int no;

    printf("请输入一个正整数：");
    scanf("%d", &no);
    if (no<0)
    {
        return 0;
    }
    
    while (no > 0)
        printf("%d ", no--);

    printf("\n");

    return 0;
}