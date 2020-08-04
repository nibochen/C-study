/*
练习 4-13

编写一段程序，求1到n的和。n的值从键盘输入
*/
#include <stdio.h>
int main(){
    int n;
    int x=0;
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        x=x+i;
    }
    printf("%d",x);

}