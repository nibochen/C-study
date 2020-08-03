#include <stdio.h>
int main(){
    double value1,value2;
    char op;
    puts("请输入算式：");
    scanf("%lf%c%lf",&value1,&op,&value2);
    if (op=='+')
    {
        printf("=%lf\n",value1+value2);
    }
    else
    {
        if (op=='-')
        {
            printf("=%lf\n",value1-value2);
        }
        else
        {
            if (op=='*')
            {
                 printf("=%lf\n",value1*value2);
            }
            else
            {
                if (op=='/')
                {
                    printf("=%lf\n",value1/value2);
                }
                  else
                  {
                      printf("输入错误。");
                  }
            }
            
            
        }
        
        
    }
    
    
}