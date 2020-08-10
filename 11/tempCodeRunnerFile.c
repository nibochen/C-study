#include<stdio.h>

int str_chnum(const char *s){
    int c=0;
    while (*s!=0)
    {
        if (*s=='c')
        {
            c++;
        }
        s++;
    }
    printf("%d",c);
    return 0;
}

int main(){
    char *a="vf";
    str_chnum(a);

}