/*
练习 4-21

编写一段程序，显示以所输入整数为边长的正方形。
*/
#include <stdio.h>
int main(){
    int l;
    scanf("%d",&l);
    for (int i = 0; i < l; i++)
    {
        for (int i = 0; i < l; i++)
        {
            printf("* ");
        }
        printf("\n");
    }
    

    
}