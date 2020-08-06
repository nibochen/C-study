#include<stdio.h>
int main(){
    int a[2][3]={{1,2,3},{4,5,6}};
    int b[3][2];
    for (int i = 0; i < 2; i++)
    {
        for (int x = 0; x < 3; x++)
        {
            printf("%d",a[i][x]);
            b[x][i]=a[i][x];
            
        }
        printf("\n");
    }
    printf("\n");
      for (int i = 0; i < 3; i++)
    {
        for (int x = 0; x < 2; x++)
        {
            printf("%d",b[i][x]);
            
            
        }
        printf("\n");
    }
}