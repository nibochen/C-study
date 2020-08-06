#include <stdio.h>
int main() {
    int x,flag = 1;
    int y = 0;
    printf("输入一个整数:");
    scanf("%d",&x);
    if (x < 0){
        printf("-");
        x = -x;
    }
    while (x != 0){
       printf("%d", x % 10);
        x /= 10;
    }
    printf("\n");
    return 0;
} 
