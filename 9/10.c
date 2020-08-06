#include <stdio.h>
#define num 128
void del_digit( char s[]) {
    int i=0;
    while(s[i] != '\0') {
        if (s[i] >= '0' && s[i] <= '9') {
            s[i++];
        }
        else
        {
            putchar(s[i]);
            i++;
        }
    }
 }

int main() {
    char s[num];
    printf("输入字符串:");
    scanf("%s", s);
    printf("%s\n", s);
    del_digit(s);

}