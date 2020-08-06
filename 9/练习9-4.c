#include<stdio.h>
void null_string(char s[])
{s[0]='\0';
}
int main(){
    char s[]="ABC";
    null_string(s);
printf("字符串str为\"%s\"。\n", s);
}