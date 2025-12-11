// Write a program to check if a number is prime.
#include <stdio.h>
int main() {
    int num,flag = 0;
    printf("Enter the number to check");
    scanf("%d",&num);
    for (int i = 2;i <= num/2;i++) {
        if (num % i == 0) {
            flag = 1;
        }
        else {
            flag = 0;

        }
    }
    if (flag) {
        printf("the number is not prime");
    }
    else {
        printf("The number is prime");
    }
    return 0;
}
