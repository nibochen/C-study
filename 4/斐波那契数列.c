#include <stdio.h>
int main()
{
    int n1, n2, n;
    n1 = n2 = 1;
    printf("%d %d", n1, n2);
    for (int i = 0; i <= 7; i++)
    {
        n = n1 + n2;
        printf(" %d", n);
        n1 = n2;
        n2 = n;
    }
    printf("\n");
}