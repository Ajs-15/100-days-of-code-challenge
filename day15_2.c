// Write a program to reverse a given number.
#include <stdio.h>
int main() {
    int digit,rev=0;
    printf("Enter the digit to reverse: ");
    scanf("%d",&digit);
    while (digit > 0 ) {
        int lsd = digit % 10;
        rev  = (rev * 10) + lsd;
        digit = digit/10;
    }
    printf("Reversed digit  = %d",rev);



    return 0;
}