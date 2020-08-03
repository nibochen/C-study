#include <stdio.h>
int main(){
     double cj;
     double zf=0;
     int rs=0;
     int bjg=0;
     scanf("%lf",&cj);
     while (cj>=0)
     {
         zf=zf+cj;
         rs++;
         if (cj<60)
         {
             bjg++;
         }
         scanf("%lf",&cj);
     }
     if(rs>0){
         printf("平均分是%lf\n",zf/rs);
     }
     printf("不及格人数%d\n",bjg);
     
    
}