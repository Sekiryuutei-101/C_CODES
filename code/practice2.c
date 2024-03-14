#include <stdio.h>
void exchange(int *, int *);
void main() 
{
    int x,y;
    x=100;
    y=200;
    printf("Before exchange : x = %d y = %d\n\n",x,y);
    exchange(&x , &y);
    printf("After exchange : x = %d y = %d\n\n",x,y);
    int m[2];
    *(m+1) = 100;
    *m = *(m+1);
    printf("%d\n", m[0]);
    int a[2];
    int *p =m;
    m[0] = 100;
    m[1] = 200;
    printf("%d %d", ++*p, *p);
}
 void exchange(int *a, int* b)
    {
        int t;
        t = *a;
        *a = *b;
        *b = t;
    }
