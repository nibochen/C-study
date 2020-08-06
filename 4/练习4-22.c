/*
练习 4-22

对代码淸单4-17中的程序进行修改，显示出一个横向较长的长方形

※读取两个边的边长，以较小的数作为行数，以较大的数作为列数。
*/
#include <stdio.h>
int main(){
    int l,h;
    int max;

    scanf("%d%d",&l,&h);
    if (h<l)
    {
        max = l;
        l = h;
        h = max;
    }
     for (int i = 0; i < l; i++)
     {
         for (int i = 0; i < h; i++)
        {
            printf("* ");
        }
        printf("\n");
    }
    

    
}