#include<stdio.h>
int main() 
{
	char s[10];
	scanf("%s",s);
	//求字符串长度
	int n=0;
	int flag=1;
	while (s[n]!=0) 
	{
		n++;
	}
	for (int i = 0; i <= n/2 -1; i++) 
	{
		if (s[i] != s[n-1-i]) 
		{
			printf("不是");
            return 0;
		}
	}
    printf("是");
}