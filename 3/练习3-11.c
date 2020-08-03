/*3-11

编写一段程序输入两个整数，如果它们的差值小于等于10,则显示“它们的差小于等于10”。
否则，显示“它们的差大于等于11”。
请使用逻辑或运算符。*/
#include <stdio.h>
int main(){
    int a,b;
    printf("请输入A:");
    scanf("%d", &a);
    printf("请输入B:");
    scanf("%d", &b);
    if ((a-b)>10||(b-a)>10)
    {
        printf("它们的差大于等于11\n");
    }else
    {
        printf("它们的差小于等于10\n");
    }
    
    
}