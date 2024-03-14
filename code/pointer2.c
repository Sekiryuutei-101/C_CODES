#include<stdio.h>
void sum(int *a , int *b){
    int add = *a + *b;
    *a = add;
}
void sub(int *a , int *b)
{
    int subs = *a - *b;
    *b = subs;
    
}
int main(){
    printf("value of a = \n");
    int a ,b;
    scanf("%d", &a);
    printf("Value of b = \n");
    scanf("%d" , &b);
    printf("Value of a = %d \n Value of b = %d \n",a,b);
    sum(&a , &b);
    printf("The value of a = %d \n", a);
    sub(&a , &b);
    printf("Value of b = %d \n", b);

}