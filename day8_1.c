// Write a program to input a character and check whether it is an uppercase alphabet,
// lowercase alphabet, digit, or special character.
#include <stdio.h>
int main() {
    char alpha;
    printf("Give an input: ");
    scanf("%c",&alpha);
    if (alpha >= 'A' && alpha <= 'Z') {
        printf("The character is Uppercase");
    }
    else if (alpha >= 'a' && alpha <= 'z') {
        printf("The character is Lowercase");
    }
    else if (alpha >='0' && alpha <= '9') {
        printf("The input is an integer");

    }
    else {
        printf("It is a special character");
    }
    return 0;
}