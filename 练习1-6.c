/*练习 1-6
编写一段程序，像下面那样读取一个整数并显示该整数减去6之后的结果。

输入一个整数:57↙
该整数减去6的结果是51。
*/
#include <stdio.h>
int main(){
       int n;
    int c;
    printf("输入一个整数:");
    scanf("%d",&n);
    int a=6;
    c=n-a;
    printf("整数减去6的结果是%d。\n",c);
}