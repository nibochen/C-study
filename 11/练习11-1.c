/*练习 11-1

将代码清单11-3中对p的赋值进行如下修改。

p = "456" + 1;*/
#include <stdio.h>

int main(void)
{
    char *p = "123";
    printf("p = \"%s\"\n", p);
    p = "456"+1;
    printf("p = \"%s\"\n", p);

    return 0;
}
//指向了字符串"456"的第1个元素所以输出为45