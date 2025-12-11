// Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
// 90-100: Grade A
// 80-89: Grade B
// 70-79: Grade C
// 60-69: Grade D
// // below 60: Grade F.
#include <stdio.h>
int main() {
    int prcnt;
    printf("Enter your grade");
    scanf("%d",&prcnt);
    if (prcnt >= 90 && prcnt <= 100) {
        printf("Grade A");
    }
    else if (prcnt >= 80 && prcnt <=89) {
        printf("Grade B");
    }
    else if (prcnt >= 70 && prcnt <= 79) {
        printf("Grade C");
    }
    else if (prcnt >= 60 && prcnt <= 69) {
        printf("Grade D");
    }
    else if (prcnt < 60 ) {
        printf("Grade F");
    }
    return 0;
}