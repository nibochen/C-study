/*练习 12-4

对代码清单12-7的程序进行改写。

不将姓名、身高等数据作为初始值，而是从键盘输入。

可以选择按身高进行升序排列，或者按照姓名的顺序排列。*/
#include <stdio.h>
#include <string.h>

#define NUMBER 5
#define NAME_LEN 64

/*表示学生的结构体*/
typedef struct {
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
} Student;

/*将x和y指向的学生进行交换*/
void swap_Student(Student *x, Student *y)
{
    Student temp = *x;
    *x = *y;
    *y = temp;
}

/*将学生数组a的前n个元素按身高进行升序排列*/
void sort_by_height(Student a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (a[j - 1].height > a[j].height)
                swap_Student(&a[j - 1], &a[j]);
        }
    }
}
void sort_by_weight(Student a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (a[j - 1].weight > a[j].weight)
                swap_Student(&a[j - 1], &a[j]);
        }
    }
}
void sort_by_name(Student a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (a[j - 1].name > a[j].name)
                swap_Student(&a[j - 1], &a[j]);
        }
    }
}

int main(void)
{
    int i;
    
     
        Student std[NUMBER];
        for ( i = 0; i < NUMBER; i++)
    {   printf("学生%d: ", i + 1);
        scanf("%s %d %f %ld\n",
              std[i].name, &std[i].height, &std[i].weight, &std[i].schols);
    }
    
    printf("按升高排序输入1\n按体重排序输入2\n按姓名排序输入3");
    int n;
    scanf("%d",&n);
    if (n==1)
    {
        sort_by_height(std, NUMBER);
    puts("\n按身高排序。");
    for (i = 0; i < NUMBER; i++)
        printf("%-8s  %6d %6.1f %7ld\n",
               std[i].name, std[i].height, std[i].weight, std[i].schols);
    return 0;
   
    }else
    {
        if (n==2)
        {
            
    sort_by_weight(std, NUMBER);
    puts("\n按体重排序。");
    for (i = 0; i < NUMBER; i++)
        printf("%-8s  %6d %6.1f %7ld\n",
               std[i].name, std[i].height, std[i].weight, std[i].schols);
    return 0;
   
        }else
    {
         sort_by_name(std, NUMBER);
    puts("\n按姓名排序。");
    for (i = 0; i < NUMBER; i++)
        printf("%-8s  %6d %6.1f %7ld\n",
               std[i].name, std[i].height, std[i].weight, std[i].schols);
    return 0;
    }
        
    }
    }
    
    
    
    
    
    
    

  
   
   