/*11-5

不使用下标运算符，编写如下函数，返回字符串s中字符c的个数(若不存在,则为0)。

*/
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
    char *a="cdcdvf";
    str_chnum(a);

}