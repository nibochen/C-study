 /*作业 - 1
 我们已经学习过摄氏和华氏温 度的转换方法，请运用所学知识，打印所示温度转换表。
220和104中间有4个空格; 没有华氏260和280
  F     C 
 40      4
 60     15 
 80     26
100     37
120     48
140     60
160     71
180     82
200     93
220    104
240    115
300    148
*/
#include <stdio.h>
int main(){
    int c;
    puts(" F    C");
    for (int i = 40; i <=300; i=i+20)
    {
        if(i==260||i==280){
           i=i+20;
           
        }
        else
        {
             c=5 * (i - 32) / 9;
            printf("%d    %d\n",i,c);
        }
    }
    
}
