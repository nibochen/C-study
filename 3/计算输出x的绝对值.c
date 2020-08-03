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