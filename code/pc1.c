#include<stdio.h>
void PrintNaturalNumber (int n) {
    if (n<=50) {
        printf ("%d ",n);
        PrintNaturalNumber (n+1);
    }
}
int main() {
    PrintNaturalNumber(1);
    return 0;
}
