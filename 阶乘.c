
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
/*
n>=34时，n！=0
因为34的阶乘的后32位的是负数，后32的补码加1为0，所以34的乘积的是0
34以后的乘积为（34+n）*34！等于（34+n）*0
所以34以后乘积为0
*/
