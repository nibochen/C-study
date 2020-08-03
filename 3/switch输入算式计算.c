#include <stdio.h>
int main(){
    double value1,value2;
    char op;
    puts("请输入算式：");
    scanf("%lf%c%lf",&value1,&op,&value2);
    switch (op)
    {
    case '+':
        printf("=%lf\n",value1+value2);
        break;
           case '-':
        printf("=%lf\n",value1-value2);
        break;
           case '*':
        printf("=%lf\n",value1*value2);
        break;
           case '/':
        printf("=%lf\n",value1/value2);
        break;
    default:
        break;
    }
}