// C Program to find the area of triangle
#include<stdio.h>
#include<math.h>
int main()
{
    
  float a, b, c, s, Area;
  
  printf("\nPlease Enter three sides of triangle\n");
  scanf("%f%f%f",&a,&b,&c);
   
  
  s = (a+b+c)/2;
  Area = sqrt(s*(s-a)*(s-b)*(s-c));
   
  
  
  printf("\n Area of triangle = %.2f\n",Area);

  return 0;
}
    
    
