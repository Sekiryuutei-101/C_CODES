#include<stdio.h>
#include<string.h>
struct student
{
    int marks;
    char name[10];
};
struct student s1,s2;
int main(){
    s1.marks = 69;
    strcpy(s2.name, "Jit\n");
    
    printf("Name is = %s\n", s2.name);
    printf("Marks is = %d", s1.marks);
    return 0;

}