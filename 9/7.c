#include<stdio.h>
#define num 128

void put_stringn(const char s[], int n) {
    int i=0;
    int j;
    for (j = 0; j < n; j++) {
        while (s[i]) {
            putchar(s[i++]);
        }
        i = 0;
    }
}
int main() {
    
    char x[num];
    int n;
    printf("请输入字符串:");
    
    scanf("%s", x);

    printf("%s", x);
    printf("显示次数:");
    scanf("%d", &n);
    putchar('\n');

    put_stringn(x, n);
    
}