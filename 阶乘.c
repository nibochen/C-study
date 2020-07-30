#include <stdio.h>
int main(){
  int n;
  printf("输入一个数求它的阶乘：");
  scanf("%d",&n);
  int n1=n;
  int x=1;
  int i=1;
  while (x<=n)
  {
    i=i*x;
    x=x+1;
  }
  printf("%d的阶乘=%d\n",n1,i);
}
