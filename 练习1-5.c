/*练习 1-5
编写一段程序，像下面那样读取一个整数并显示该整数加上12之后的结果。

输入一个整数:57↙
整数加上12的结果是69。
*/
#include <stdio.h>
int main(){
    int n;
    int c;
    printf("输入一个整数:");
    scanf("%d",&n);
    int a=12;
    c=n+a;
    printf("整数加上12的结果是%d。\n",c);

}