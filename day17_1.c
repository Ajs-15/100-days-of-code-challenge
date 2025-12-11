// Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>
int main() {
    int num,og,sum;
    printf("Enter a number to check if it is armstrong or not");
    scanf("%d",&num);
    og = num;
    while (num>0) {
        int lsd = num % 10;
        sum += pow(lsd,3);
        num = num/10;
    }
    if ( og == sum) {
        printf("Number is armstrong");
    }
    else {
        printf("It is not armstrong");
    }

    return 0;
}