/*3-5

编写一段程序，确认相等运算符和关系运算符的运算结果是1和0。*/
#include <stdio.h>
int main(){
    int a=7;
    int b=7;
    int c1,c2;
    c1=(a==b);
    c2=(a<b);
    printf("%d\n%d\n",c1,c2);
    
}