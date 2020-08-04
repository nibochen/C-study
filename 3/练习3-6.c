/*练习 3-6

编写一段程序，计算出输入的三个整数中的最小值并显示。

※注意使用if语句*/
#include <stdio.h>
int main(){
    int a,b,c;
    printf("请输入A:");
    scanf("%d",&a);
    printf("请输入B:");
    scanf("%d",&b);
    printf("请输入C:");
    scanf("%d",&c);
    int max;
    max=a;
    if (b>max){
        max=b;
    }
    if(c>max){
        max=c;
    }
    printf("%d",max);

}