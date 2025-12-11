// Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main() {
    int binary, onesComplement = 0;
    int place = 1;

    // Input binary number
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    // Find 1's complement
    while (binary > 0) {
        int bit = binary % 10;
        bit = (bit == 0) ? 1 : 0;
        onesComplement = onesComplement + (bit * place);
        place *= 10;
        binary /= 10;
    }

    printf("1's Complement = %d\n", onesComplement);

    return 0;
}
