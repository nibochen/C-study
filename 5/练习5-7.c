/*
练习 5-7

编写一段程序，读取数组中的数据个数和元素值并显示。显示时，各值之间用逗号和空格分割，并用大括号将所有值括起来。
注意利用对象式宏来声明数组的元素个数，如代码清单5-12那样。
*/
#include<stdio.h>
#define num 10
int main( ){
    int n[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d",&n[i]);
    }
    printf("{");
    for (int i = 0; i < num; i++)
    {if  (i == (num - 1)){
        printf("%d",n[i]);
        continue;
    }
    {
         printf("%d, ",n[i]);
    }
    
    }
    printf("}");
    
}