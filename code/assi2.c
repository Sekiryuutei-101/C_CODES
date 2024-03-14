// 2.	Write a C program that accepts two integers from the user and calculate the sum of the two integers. 

#include<stdio.h>
int main()
{
    int a,b;
    printf("Input the first integer = ");
    scanf("%d" ,&a );
    printf("Input the second integer = ");
    scanf("%d", &b);
    int sum = a+b;
    printf("Sum of the above = %d", sum );
    return 0;
}