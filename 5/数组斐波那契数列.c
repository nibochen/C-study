#include<stdio.h>
int main(){
    int f[10];
    f[0]=f[1]=1;
    for (int i = 2; i < 10; i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",f[i]);
    }
    printf("\n");
    
}