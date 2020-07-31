#include <stdio.h>
float f(x){
    float a;
    if (x==0)
    {
       return 0;
    }
    else
    {
        a=1.0/x;
    }
    return a;

}

int main(){
    int x;
    scanf("%d",&x);
    float i;
    i=f(x);
    printf("%d的导数是%f\n",x,i);
return 0;

}