/*
练习 4-24

编写一段程序，输入一个整数，显示出输入整数层的金字塔形状。 提示:第i行显示(i-1)*2+1个'*'。

让我们来画一个金子塔。
金字塔有几层：5
    *4
   ***3
  *****2
 *******1
*********
*/
#include <stdio.h>
void pyramid(int n)
{ 
    int h, i;
    for (i = 1; i <= n; i++)
    {//从第一行开始
        for (h = 1; h <=n-i;h++)
        {//打印空格
            printf(" ");
        }
        for (int h = 1; h <=(i-1)*2+1; h++)
        {//打印数字
            printf("*");
        }
        printf("\n");//换行
    }
}

int main()
{
    int q;
    scanf("%d", &q);
    pyramid(q);
    return 0;
}