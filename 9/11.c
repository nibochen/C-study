#include <stdio.h>
#define num 5
#define number 6
/*--- 显示字符串数组 ---*/
void put_strary(const char* s[number], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        if (strcmp(s[i], "$$$$$") == 0) {
            break;
        }
        printf("s[%d] = \"%s\"\n", i, s[i]);
        
    }
}

int main(void)
{
    char* cs[number] = { "Turbo", "NA", "DOHC","$$$$$","EWGEWGE" };

    put_strary(cs, num);

    return 0;
}