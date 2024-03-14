/* Write a program to calculate the simple interest and compound interest*/
#include <stdio.h>
#include <math.h>

int main() {
    float principle, rate, time, simple_interest, compound_interest;

    // Input values
    printf("Enter principle amount: ");
    scanf("%f", &principle);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time period in years: ");
    scanf("%f", &time);

    // Simple interest calculation
    simple_interest = (principle * rate * time) / 100.0;

    // Compound interest calculation
    compound_interest = principle * pow((1 + rate / 100.0), time) - principle;

    // Output results
    printf("Simple Interest = %f\n", simple_interest);
    printf("Compound Interest = %f\n", compound_interest);

    return 0;
}
