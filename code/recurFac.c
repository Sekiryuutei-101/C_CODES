#include<stdio.h>
int factorial(int a);
int main()
{
    int n;
    printf("Enter value of n \n");
    scanf("%d", &n);
    int fac = factorial(n);
    printf("Factorial of %d is %d",n,fac);
    return 0;
}
int factorial(int a)
{
    if (a==0)
    return 1;
    else 
    return a*factorial(a-1);
}