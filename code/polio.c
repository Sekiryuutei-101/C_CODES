#include<stdio.h>
int series(int a);
int main()
{
    int n;
    printf("Enter n = ");
    scanf("%d",&n);
    int value = series(n);
    printf("value of series =  %d",&value);
    return 0;
}
int series( int a)
{
    if (a==0)
    return 1;
}