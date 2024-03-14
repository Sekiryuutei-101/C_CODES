#include <stdio.h>
// function to reverse a string using recursion
void reverseString(char *str)
{
    // base case
    if (*str == '\0')
        return;
    // recursive case
    // move the pointer to the next character
    reverseString(str + 1);
    // print the current character
    printf("%c", *str);
}
// main function
int main()
{
    // read a string from the user
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    // reverse and print the string
    printf("Reversed string: ");
    reverseString(str);
    printf("\n");
    return 0;
}
