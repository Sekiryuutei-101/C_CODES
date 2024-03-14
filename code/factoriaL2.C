/*Write a C program to find the factorial of a given number using 
non-recursive functions*/
#include <stdio.h>

int factorial(int num);

int factorial(int num)
{
    int i, fact=1;
    
    for(i=1; i<=num; i++)
    {
        fact *= i;
    }
    
    return fact;
}

int main()
{
    int num, fact;
    
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);
    
    fact = factorial(num);
    
    printf("The factorial of %d is %d", num, fact);
    
    return 0;
}

