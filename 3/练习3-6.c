/*练习 3-6

编写一段程序，计算出输入的三个整数中的最小值并显示。

※注意使用if语句*/
#include <stdio.h>
int main(){
    int a,b,c;
    printf("请输入A:");
    scanf("%d",&a);
    printf("请输入B:");
    scanf("%d",&b);
    printf("请输入C:");
    scanf("%d",&c);
    if (a<b)
    {
        if (a<c)
        {
            printf("A最小");
        }else
        {
             printf("C最小");
        }
        
        
    }else
    {
        if (c>b)
        {
            printf("B最小");
        }else
        {
            printf("C最小");
        }
        
        
    }
    
    

}