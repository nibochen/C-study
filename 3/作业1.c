//根据输入的月份输出该月的天数，假设该年份不是闰年 怎么用最少的分支结构完成
#include <stdio.h>
int main(){
    int a;
    puts("请输入月份：");
    scanf("%d",&a);
    if (a==2){
        printf("2月份有29天。\n");
    }
    else
    {
        if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
        {
            printf("%d月份有31天。\n",a);
        }
        else
        {
            printf("%d月份有30天。\n",a);
        }
        
    }
    
}