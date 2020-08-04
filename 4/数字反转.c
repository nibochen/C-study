#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    do
    {
        printf("%d",x%10);
        x=x/10;
    } while (x!=0);
    

    
}