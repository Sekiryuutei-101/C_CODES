//C program to convert temperature from centigrade to fareinheight.



#include<stdio.h>
int main()
{
    float celcius , fareinheit;
    printf("Enter temperature in Celcius = ");
    scanf("%f" , &celcius);

    fareinheit = (celcius * 9/5) + 32;
    printf("%.2f Celcius = %.2f fareinheit" , celcius , fareinheit);
    return 0;
}