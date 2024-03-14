// C program to find the power 4 of any number provided by the user
#include<stdio.h>
int main()
{
    float num , result;
    printf("Enter a number = ");
    scanf("%f" , &num); 
    result = num*num*num*num;
    printf("%.2f to the power 4 is %.2f \n" , num , result);

    return 0;
}