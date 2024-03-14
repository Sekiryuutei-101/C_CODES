/*Write a C program to find the factorial of a given number using 
recursive functions*/
#include <stdio.h>

int factorial(int n);

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);5
    }
}

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Error: Factorial of negative number does not exist.");
    }
    else
    {
        int result = factorial(num);
        printf("Factorial of %d is %d.", num, result);
    }
    
    return 0;
}
