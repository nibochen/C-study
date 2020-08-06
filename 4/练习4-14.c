/*
练习 4-14

编写一段程序，根据输入的整数，循环显示1234567890，显示的位数和输入的整数值相同。

123456789012345678901234
*/
#include <stdio.h>

int main() {
    int num,i,j;
    printf("请输入一个整数:");
    scanf("%d", &num);
    i = num / 10;
     j  = num %10;
    while (i-->0)
    printf("1234567890");
    for (i = 1; i <= j; i++){
        printf("%d",i);
    }
          printf("\n");
    return 0;
    
}  