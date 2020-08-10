/*练习 11-2

在代码清单11.4中，各数组的字符串个数3是作为常量嵌在程序(for语句的控制表达式)中的。
请编写一段程序，将其改写为通过计算求出
*/
#include <stdio.h>


int main(void)
{
    int i,n;
    char a[][5] = {"LISP", "C", "ADA"};
    char *p[] = {"PAUL", "X", "MAC"};
    n=(sizeof a)/sizeof(*a);
    for (i = 0; i < n; i++)
        printf("a[%d] = \"%s\"\n", i, a[i]);
    n=sizeof p/sizeof(*p);
    for (i = 0; i < n; i++)
        printf("p[%d] = \"%s\"\n", i, p[i]);
    
    return 0;
}