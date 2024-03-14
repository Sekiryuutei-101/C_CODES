/* Write a C program to read a floating point number. Display the rightmost digit of the 
inegral part of the number */
#include<stdio.h>
int main(){
    float num;
    int a,b;
    printf("Enter a floating number = ");
    scanf("%f", &num);
    a = (int)num;
    b = a%10;
    printf("Right most digit of integral part = %d " , b);
    return 0;
    
}