#include <stdio.h>
#include <stdbool.h>
bool ss (int x)
{
    int j;
    for (j = 2; j <= x - 1; j++)
    {
        if (x % j == 0)
        {
            //m能被i整除，则不是素数
            break;
        }
    }
    if (j == x)
    {
        //printf("是素数");
        return true;
    }else
    {
        //printf("不是素数");
        return false;
    }
}



int main(){
    int i;
    int num=0;
    for ( i = 1; i <=100; i++)
    {if (ss(i))
    {
         printf("%4d",i);
        num++;
        if (num%10==0)
        {
            printf("\n");
        }
        
    }
    
       
    }
    
    
}