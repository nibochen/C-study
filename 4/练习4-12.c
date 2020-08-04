/*
练习 4-12

编写一段程序，读取一个正整数，显示其位数。
※注意:代码清单4-10中while语句的循环次数和no的位数一致。


*/
#include <stdio.h>
int main(){
    int n;
    int x=0;
    scanf("%d",&n);
    do
    {n=n/10;
        x++;
    } while (n!=0);
    printf("%d\n",x);
}