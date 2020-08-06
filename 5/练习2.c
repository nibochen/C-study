#include<stdio.h>
int main(){
    int x[3][3];
  for (int i = 0; i < 3; i++)
  {
     for (int j = 0; j < 3; j++)
     {
          scanf("%d",&x[i][j]);
     }
  }
      for (int i = 0; i < 3; i++)
  {
     for (int j = 0; j < 3; j++)
        {
            if (j==1||i==1)
            {
                printf("%-6d",x[i][j]);
            }printf("%-6c",' ');
            
            
     }
     printf("\n");
    
  }
}