// C Program to calculate the area of the circle
#include<stdio.h>
#include<stdio.h>
#define PI 3.142
int main()
{
    float radius;
    printf("Enter radius of circle = ");
    scanf("%f",&radius);
    float area =PI*(radius*radius);
    printf("Area of circle  = %f" , area);
    return 0;

}