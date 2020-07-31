#include <stdio.h>
float f(x){
    float c;
     if (x<=15)
    {
        c=4.0/3.0*x;

    }
    else
    {
        c=2.5*x-10.5;
    }
    
return c;

}
int main(){
    float x;
    puts("输入用的水量（单位吨）：");
    scanf("%f",&x);
    float a;
    a=f(x);
    
printf("%.2f吨的水，水费是%.2f元。",x,a);
}
