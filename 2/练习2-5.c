/*练习 2-5

编写一段程序，读取两个整数的值，计算出前者是后者的百分之几，并用实数输出结果。
*/
#include <stdio.h>
int main()
{
	int n1, n2;
	puts("请输入两个整数：");
	printf("整数A："); scanf("%d", &n1);
	printf("整数B："); scanf("%d", &n2);

	printf("A是B的%f%%。\n", (double) (n1*100) / n2);	
	return 0;
}