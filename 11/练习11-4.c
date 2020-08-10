/*
练习 11-4

不使用下标运算符，编写如下函数，显示字符串s。

*/
#include<stdio.h>
void put_string(const char *s) {
        printf("%s",s);
 }


int main(){
    char *p={"nmsl"};
    put_string(p);
}