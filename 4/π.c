#include <stdio.h>
#include <math.h>
int main()
{
    double item = 1.0;
    double sum = 0;
    int flag = 1;
    int fenmu = 1;
    double e;
    scanf("%lf",&e);
    while (fabs(item)>=e)
    {
        sum = sum + item;
        flag = -flag;
        fenmu = fenmu + 2;
        item = flag * (1.0 / fenmu);
    }
    sum = sum + item;
    printf("pi is %.8lf\n", sum * 4);
}