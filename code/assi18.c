/* C program to read two floating point numbers. Add these numbers and assign the result to an 
integer. Finally display the value of all the three variables*/
#include<stdio.h>
int main(){
    float f1, f2;
    int total;
    printf("Enter 1st floating number = ");
    scanf("%f", &f1);
    printf("Enter 2nd floating number = ");
    scanf("%f" , &f2);
    total = (int) f1+f2;
    printf("Total is = %d", total);
    return 0;
}