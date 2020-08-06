#include<stdio.h>
#define num 128

int str_chnum(const char s[], int c) {
    int i;
    int cnt = 0;
    for (i = 0; i < num; i++) {
        if (*s++ == 'c') {
            cnt++;
        }
    }
    return cnt;
    
}

int main() {
    char c = 'c';
    char x[num];
    printf("请输入字符串:");
    scanf("%s", x);

    printf("%s", x);
    putchar('\n');
    printf("%d", str_chnum(x, c));
    
}