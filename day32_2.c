// Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long long num;
    int digit, freq[10] = {0};
    int maxDigit = 0, maxCount = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    if (num < 0)
        num = -num; // handle negative numbers

    // Count frequency of each digit
    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    // Find the digit with maximum frequency
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            maxDigit = i;
        }
    }

    printf("Digit %d occurs the most (%d times).\n", maxDigit, maxCount);

    return 0;
}
