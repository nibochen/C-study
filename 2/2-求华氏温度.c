#include <stdio.h>
int main (){
    int f;
    int c;
    puts("请输入摄氏度：");
    scanf("%d",&c);
    f=c*1.8+32;
    printf("当温度为%d摄氏度时，为%d华氏度。\n",c,f);
    }