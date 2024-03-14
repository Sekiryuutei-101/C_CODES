/*Write a c program to find the factorial of a given number using 
iterative statements*/
#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // factorial of 0 is 1
    if (num == 0) {
        printf("Factorial of %d is 1", num);
    } else {
        for (i = 1; i <= num; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d is %d", num, factorial);
    }

    return 0;
}
