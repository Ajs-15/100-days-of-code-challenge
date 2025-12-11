// Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
int main() {
    char alpha;
    char vowel[] = {'A','E','I','O','U','a','e','i','o','u'};
    int flag = 0;
    printf ("Enter the character you want to check: ");
    scanf("%c",&alpha);
    for (int i=0;i < 10;i++) {
        if (vowel[i] == alpha) {
            flag = 1;
            break;
        }
    }
    if (flag) {
        printf("It is a vowel");
    }
    else {
        printf("It is a consonant");
    }

    return 0;
}