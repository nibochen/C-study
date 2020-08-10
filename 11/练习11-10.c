/*练习 11-10

编写如下函数，实现与库函数atoi、atof相同的功能。
*/



//int strtoi(const char *nptr) { /* ... */ }
//double strtof(const char *nptr) { /* ... */ }
//理解万岁
//只读的懂atoi
//网上的代码
#include <stdio.h>                                                                                                                            
#include <stdbool.h>
  
int my_atoi(const char *src)
{
      int s = 0;
      bool isMinus = false;
  
      while(*src == ' ')  //跳过空白符
      {
          src++; 
      }
  
      if(*src == '+' || *src == '-')
      {
          if(*src == '-')
          {
              isMinus = true;
          }
          src++;
      }
      else if(*src < '0' || *src > '9')  //如果第一位既不是符号也不是数字，直接返回异常值
      {
          s = 2147483647;
          return s;
      }
  
      while(*src != '\0' && *src >= '0' && *src <= '9')
      {
          s = s * 10 + *src - '0';
          src++;
      }
      return s * (isMinus ? -1 : 1);
 }

 int main()
 {
      int num;
  
      char *str = "a123456";
      num = my_atoi(str);
      printf("atoi num is: %d \r\n", num);
  
      return 0;
 }   