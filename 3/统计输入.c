/* 
输入10个字符，统计其中的英文字母、数字字符和其他字符的个数。
int letter, digit, other, i;
char ch;
letter = 0;
digit = 0;
other = 0;
*/
#include <stdio.h>
int main(){
    int letter = 0;
    int digit = 0;
    int other = 0;
    int i=0;
    char ch;
    puts("请输入10个字符：");
    while (i<10)
    {
        ch=getchar();
        if ((ch>'A'&&ch<'Z')||(ch>'a'&&ch<'z'))
        {
            letter ++;
        }
        else
        {
            if (ch>'0'&&ch<'9')
            {
                digit ++;
            }
            else
            {
                other ++;
            }
        }
        i++;
    }
    printf("英文字母有%d个，数字字符有%d个，其他字符有%d个。",letter,digit,other);
}