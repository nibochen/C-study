/*练习2-1

编写一段程序，读取两个整数，然后显示出前者是后者的百分之几。
*/
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    double x;
    x= ((double)a)/b*100;
    printf("%.2f",x);
}