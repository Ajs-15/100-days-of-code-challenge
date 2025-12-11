// Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    printf("Enter a sentence:\n");
    fgets(str, sizeof(str), stdin);  // Read input including spaces

    int i = 0;
    int capitalize = 1;  // Flag to capitalize the next character

    while (str[i] != '\0') {
        if (capitalize && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalize = 0;
        } else if (str[i] == ' ') {
            capitalize = 1;
        } else {
            str[i] = tolower(str[i]);
        }
        i++;
    }

    printf("Sentence case:\n%s", str);
    return 0;
}