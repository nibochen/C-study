#include <stdio.h>
#include <math.h>
int main(){
    float sum,money,rate,year;
    printf("请输入年，本金，利息：");
    scanf("%f%f%f",&money,&year,&rate);
    sum=money*pow((1+rate),year);
    printf("%f存%f年，年利率%f,本息%f\n",money,year,rate,sum);

}