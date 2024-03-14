
/* Write a C program to convert specified days into years, weeks and days
NOTE: Ignore leap year.
Test Data: 
Number of days: 1329
Expected Output: 
Years:3
Weeks:33
Days:3 
*/
#include<stdio.h>
int main()
{
    int days;
    printf("Enter number of days = ");
    scanf("%d", &days);
    int yr,week;
    yr = (days/365);
    week = ((days%365)/7);
    days = days- ((yr*365) + (week*7));
    printf("Years: = %d \n", yr);
    printf("Weeks: = %d \n", week);
    printf("Days = %d \n", days);
    return 0;
}