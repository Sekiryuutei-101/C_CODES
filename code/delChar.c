#include <stdio.h>
#include <string.h>
void removeChar(char *str, char c) {
    int i, j;
    int len = strlen(str);
    for (i = j = 0; i < len; i++) {
        if (str[i] != c) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100], c;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    printf("Enter a character you want to remove: ");
    scanf("%c", &c);
    removeChar(str, c);
    printf("String after removing '%c': %s\n", c, str);
    return 0;
}