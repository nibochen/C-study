/*
练习 10-1

编写函数adjust_point，如果n指向的值小于0,就将其改为0:
如果值大于100,就将其改为100(如果是0〜100的值，则不修改)。

*/
#include<stdio.h>
void adjust_point(int *n){
    
 if (*n < 0){
     *n = 0;
     }else
     {
         if (*n>100)
         {
             *n=100;
         }
         
     }
     

}
int main(void)
{
    int h = 179;

    adjust_point(&h);

    printf("%d\n",h);


    return 0;
}