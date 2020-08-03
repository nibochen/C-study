 //阶乘表优化
#include <stdio.h> 
int main(void)
{
    int i; 
    scanf("%d",&i);
    int a=1;
    for( int x=1; x<=i; x++ ) {
        a=a*x;
        printf("%d!=%d\n", x, a);
    }
    return 0;
}
