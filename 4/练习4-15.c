/*
练习 4-15

编写一段程序，显示出身高和标准体重的对照表。显示的身高范围和间隔由输入的整数值进行结控制，标准体重精确到小数点后2位。

开始数值（cm）：155
结束数值（cm）：190
间隔数值（cm）：5

155cm    49.50kg
160cm    54.00kg
...(以下省略)...
*/
#include <stdio.h>
int main(){
    int open,end,x;
    double y;
    scanf("%d",&open);
    scanf("%d",&end);
    scanf("%d",&x);
    for ( int i=open; i <=end; i+=x)
    {
        y=(i-80)*0.7;
        printf("%dcm   %0.2lfkg\n",i,y);
    }
    
}