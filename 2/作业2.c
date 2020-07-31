 //阶乘表优化
#include <stdio.h> 
double fact(int n); 
int main(void)
{
    int i; 
    for( i=0; i<=10; i++ ) 
        printf("%d!=%.0f\n", i, fact(i));
    return 0; 
}

 double fact(int n)
{
    int i;
    double product = 1;
    for ( i = 1; i <= n; i++ )
        product = product * i;
    return  product;
}
 