#include<stdio.h>
int fibonacci (int a);
int main()
{
    int n,sum=0;
    printf("Enter n = ");
    scanf("%d",&n);
    printf("Fibonacci series =  \n");
     printf("%d", fibonacci(n));
}
int fibonacci(int a)
    {
        if (a==0)
        return 0;
        else if (a==1)
        return 1;
        else 
        return (fibonacci(a-1) + fibonacci(a-2));
    } 
     
