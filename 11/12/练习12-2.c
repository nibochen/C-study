/*练习 12-2

代码清单12-5的程序中，结构体对象sanaka的各成员的值都有初始值。
改写这个程序，声明时不为其赋初始值，而且各成员的值从键盘输入。
*/
#include <stdio.h>

#define NAME_LEN 64

typedef struct student {        /*student可以省略*/
    char name[NAME_LEN];   /*姓名*/
    int height;            /*身高*/
    float weight;          /*体重*/
    long schols;           /*奖学金*/
} Student;



int main(void)
{
    Student sanaka ={};// {"Sanaka", 175, 62.5, 73000};
    scanf("%s",sanaka.name);
    scanf("%d",&sanaka.height);
    scanf("%f",&sanaka.weight);
    scanf("%ld",&sanaka.schols);

    printf("姓名 = %s\n", sanaka.name);
    printf("身高 = %d\n", sanaka.height);
    printf("体重 = %.1f\n", sanaka.weight);
    printf("奖学金 = %ld\n", sanaka.schols);

    return 0;
}