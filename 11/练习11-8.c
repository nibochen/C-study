/*练习 11-8

编写如下函数，删除字符串str内的所有数字字符。

*/
#include<stdio.h>

void del_digit(char *str) 
{
    char *temp=str;
    while (*temp) {
        if (*temp<='9'&&*temp>='0')
        {
            temp++;
        }
        else
        {
            *str=*temp;
            str++;
            temp++;
        }
       
    }
     *str='\0';
}

int main(void)
{
    char str[]={"nmsl321weqw"};

   // printf("请输入字符串：");
    //scanf("%s", str);

    del_digit(str);
 printf("%s",str);
    return 0;
}
