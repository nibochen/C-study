/*练习 2-6

编写一段程序，读取表示身高的整数，显示出标准体重的实数值。标准体重根据公式(身高-100)X0.9进行计算，所得结果保留一位小数。

请输入您的身高：175
您的标准体重是67.5
*/
#include <stdio.h>
int main(){
    int high;
    scanf("%d",&high);
    float kg;
    kg=(high-100)*0.9;
    printf("%0.1f\n",kg);
}