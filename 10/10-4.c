/*练习 10-4

编写如下set_idx函数，接收元素类型为int型、元素个数为n的数组，并为所有元素赋上和下标相同的值。
*/
#include<stdio.h>

#define NUM 5
void set_idx(int *v,int n){
    for (int i = 0; i < n; i++)
    {
        v[i]=i;
    }
    
}

int main(void)
{
	int i;
	int a[NUM];
	set_idx(a,NUM);
	for (i = 0; i < NUM; i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	return 0;
}
