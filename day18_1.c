// Write a program to print all factors of a given number.
#include <stdio.h>
int main() {
    int num;
    printf("Enter the number you want to check");
    scanf("%d",&num);
    for (int i = 1; i <= num/2;i++) {
        if (num % i == 0) {
            printf("%d \n",i);
        }
    }


    return 0;
}