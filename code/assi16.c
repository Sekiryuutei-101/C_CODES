/* C program to the value in exponential format with the following specifcation
a. correct to two decimal places
b. correct to four decimal places
c. correct to eight decimal places */
#include<stdio.h>
int main() {
    double value = 567.696589;
    //print value in exponential format with 2 decimal places
    printf("%.2e\n", value);
    //Print value in exponential format with 4 decimal places
    printf("%.4e\n" , value);
    //Print value in exponential format with 8 decimal places
    printf("%.8e",value);
    return 0;
}