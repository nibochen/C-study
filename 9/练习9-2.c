/*
练习 9-2
如何让下述初始化賦值得到的字符串s变成空字符串?请编写程序实现。

char s[]="ABC";
*/
#include<stdio.h>
int main(){
    char s[]="ABC";
    s[0]='\0';
printf("字符串str为\"%s\"。\n", s);
}