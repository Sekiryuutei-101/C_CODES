// C program to read a numbe.Then display the value in decimal, octal and hexadecimal notation
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number = ");
    scanf("%d" , &num);
    printf("Decimal notation: %d\n", num);
    printf("Octal notaion: %o \n ", num);
    printf("Hexadecimal notation: %X \n", num);
    return 0;
    
}