#include <stdio.h>
int main(){
    int year;
    puts("请输入年份：");
    scanf("%d",&year);
    if(((year%4==0)&&(year%100!=0))||(year%400==0)){
        printf("%d是闰年\n",year);
    }
    else printf("%d不是闰年\n",year);
    
}