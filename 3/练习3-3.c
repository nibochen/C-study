/*3-3

编写一段程序，输入一个整数值，显示出它的绝对值。*/
#include <stdio.h>
int main(){
    double i;
    scanf("%lf",&i);
    if (i>=0)
    {
        printf("%lf的绝对值是%lf\n",i,i);
    }
    else
    {
        printf("%lf的绝对值是%lf\n",i,-i);
    }
    return 0;
    
}