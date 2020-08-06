/*
练习 5-6

假设变量a是double型，变量b是int型，请说明经过下述赋值后a和b的值分别是多少。

a = b = 1.5;
*/
#include<stdio.h>
int main(){
    int b;
    double a;
    a=b=1.5;
    printf("%lf %d",a,b);
}