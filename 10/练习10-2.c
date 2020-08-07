/*编写如下函数，将*y年*m月*d日的日期，修改为其前一天或后一天的曰期。
*/
#include<stdio.h>
void decrement_date(int *y,int *m,int *d) 
{
	//日期先加1
	*d=*d+1;
	//判断日期
	switch (*m) 
	{
		case 1:
		    case 3:
		    case 5:
		    case 7:
		    case 8:
		    case 10:
		    case 12:
		        if (*d>31) 
		{
			*d=1;
			*m=*m+1;
		}
		break;
		case 2:
		    //闰年判断
		if (((*y % 4 == 0) && (*y % 100 != 0)) || (*y % 400 == 0)) 
		{
			if (*d>29) 
			{
				*d=1;
				*m=*m+1;
			}
		} else if (*d>28) 
		{
			*d=1;
			*m=*m+1;
		}
		break;
		case 4:
		    case 6:
		    case 9:
		    case 11:
		        if (*d>30) 
		{
			*d=1;
			*m=*m+1;
		}
		break;
	}
	//判断月份
	if(*m>12) 
	{
		*m=1;
		*y=*y+1;
	}
}
void increment_date(int *y,int *m,int *d) 
{
	//日期先减1
	*d=*d-1;
	//判断日期
	switch (*m) 
	{
		case 1:
		    case 2:
		    case 4:
		    case 6:
		    case 8:
		    case 9:
		    case 11:
		        if (*d<1) 
		{
			*d=31;
			*m=*m-1;
		}
		break;
		case 3:
		    //闰年判断
		if (((*y % 4 == 0) && (*y % 100 != 0)) || (*y % 400 == 0)) 
		{
			if (*d<1) 
			{
				*d=29;
				*m=*m-1;
			}
		} else if (*d<1) 
		{
			*d=28;
			*m=*m-1;
		}
		break;
		case 5:
		    case 7:
		    case 10:
		    case 12:
		        if (*d<1) 
		{
			*d=30;
			*m=*m-1;
		}
		break;
	}
	//判断月份
	if(*m<1) 
	{
		*m=12;
		*y=*y-1;
	}
}
int main(void) 
{
	int y, m, d;
    int flag;
	printf("输入年月日");
	scanf("%d %d %d",&y,&m,&d);
    printf("日期相加请输入1,相减输入0:");
    scanf("%d",&flag);
    if (flag==1)
    {
        decrement_date(&y, &m, &d);
	printf("日期加一:%d %d %d\n",y,m,d);
    }else
    {
        if (flag==0)
        {
            increment_date(&y, &m, &d);
	printf("日减加一:%d %d %d\n",y,m,d);
        }else
        {
            printf("请输入正确的数.");
        }
    }
	return 0;
}