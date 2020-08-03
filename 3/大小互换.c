#include <stdio.h>
int main()
{
    char ch;
    while ((ch = getchar()) != EOF)
    {
        if (ch <= 'z' && ch >= 'a')
        {
            ch = ch + 'A' - 'a';
        }
        else
        {
            if (ch <= 'Z' && ch >= 'A')
            {
                ch = ch + 'a' - 'A';
            }
        }
        putchar(ch);
    }
}