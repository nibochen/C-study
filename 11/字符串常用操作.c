#include<stdio.h>
#include<stdlib.h>
int myStrlen(char* s){
    int len =0;
    while (*s !=0)
    {
        len++;
        s++;
    }
    return len;
}

void myStrcyp(char* s,char*  t){
    while (*s!=0)
    {
        *t=*s;
        t++;
        s++;
    }
    *t=0;
}

void myStrcat(char* s,char* t){
    //找到s结束的地方
    while (*s!=0)
    {
        s++;
    }
    //copy
    myStrcyp(t,s);
}



int main(){
    char* s="abcd";
    char* t= malloc(100*sizeof(char));//=char* t[100];

    printf("%s %s\n",myStrcyp(s,t))
    myStrcat(s,"nmsl");
    printf("%s",s);
}