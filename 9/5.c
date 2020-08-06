#include<stdio.h>
#define num 128

int str_char(const char s[], int c) {
    int i;
    for (i = 0; i < num; i++) {
        if (*s++ == 'c') {
            return  i;
        }
    }
    return -1;
    
}

int main() {
    char c = 'c';
    char x[num];
    printf("请输入字符串:");
    scanf("%s", x);

    printf("%s", x);
    putchar('\n');
    printf("%d", str_char(x, c));
    
}