/*
练习 4-14

编写一段程序，根据输入的整数，循环显示1234567890，显示的位数和输入的整数值相同。

123456789012345678901234
*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int i = 1; i <= 9; i++)
        {
            if (i==10)
            {
                i=0;
                printf("0");
            }else
            {
                printf("%d",i);
            }
            
            
        }
        
    }
    
}