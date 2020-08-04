#include <stdio.h>
int even(int x){
    if (x%2==0)
    {
        return 1;
    }else
    {
        return 0;
    }
    
  
}


int main(){
    int n;
    int y;
    scanf("%d",&n);
    y=even(n);
    printf("%d\n",y);


}