#include<stdio.h>

struct student
{
    int id;
    char name[20];
    int math;
};


void displayStudent(struct student s){
    printf("%s",s.name);
    printf("%d",s.id);
    printf("%d",s.math);
}



int main(){
    struct student s2={2,"cnm",60}; 
    displayStudent(s2);
}