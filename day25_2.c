// Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *
#include <stdio.h>

int main() {
    int i, j, space, stars;

    for (i = 1; i <= 5; i++) {
        // Print spaces
        for (space = 1; space < i; space++) {
            printf(" ");
        }
        // Print stars
        for (stars = 5; stars >= i; stars--) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
