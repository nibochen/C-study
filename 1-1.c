#include <stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int x=1;
  int i=1;
 
  while (x<=n)
  {
    i=i*x;
    x=x+1;
  }
  printf("fac=%d\n",i);
}
