/*
练习 4-20

编写一段程序，为九九乘法表增加横纵标题。
*/
#include <stdio.h>
int main(){
    int x,i,y;
    printf("               乘法表\n");
    for ( i = 1; i <=9; i++)
    {        
        printf("%d|",i);
        for (  y = 1; y <=i; y++)
        {   
            x=i*y;
            printf("%d*%d=%2d",i,y,x); 
        }
               printf("\n");
        
        
         
        
    }
    
}