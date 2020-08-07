/*练习 10-3

编写如下函数，将n1、n2、n3指向的三个int型整数按升序排列。*/
#include<stdio.h>
void sort3(int *n1,int *n2,int *n3){
    int min;
    if (*n1>*n2)
    {
        min=*n2;
        *n2=*n1;
        *n1=min;
    }
    if (*n2>*n3)
    {
        min=*n3;
        *n3=*n2;
        *n2=min;
    }
    if (*n1>*n2)
    {
        min=*n2;
        *n2=*n1;
        *n1=min;
    }
}

int main(void)
{
	int n1,n2,n3;
	printf("input n1 n2 n3:");
	scanf("%d %d %d",&n1,&n2,&n3);
	sort3(&n1,&n2,&n3);
	printf("sort:%d %d %d\n",n1,n2,n3);
 
	return 0;
}
