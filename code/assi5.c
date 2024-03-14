// 5. C program to Compute Quotient and Remainder of two numbers

#include <stdio.h>
int main() {
    int a, b, c, d;
    printf("Enter dividend: ");
    scanf("%d", &a);
    printf("Enter divisor: ");
    scanf("%d", &b);

    // Computes quotient
    c = a / b;

    // Computes remainder
    d = a % b;

    printf("Quotient = %d\n", c);
    printf("Remainder = %d", d);
    return 0;
}