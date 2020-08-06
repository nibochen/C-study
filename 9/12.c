#include <stdio.h>

void rev_string(char s[][128], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        int j = 0;
        int g = strlen(s[i]);
        printf("s[%d]=\"", i);
        while (s[i][j])
        {
            
            putchar(s[i][(g - (j++) - 1)]);
        }puts("\"");
    }
}

int main() {
    int n;
    printf("将字符串逆向显示的个数:");
    scanf("%d", &n);
    char s[][128] = { "asdg","abc","cba","gfdaa" };
    rev_string(s,n);
}