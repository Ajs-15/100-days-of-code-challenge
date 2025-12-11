// Write a program to find the sum of digits of a number.
#include <stdio.h>
int main() {
    int num,sum;
    printf("Enter the number you want to get the sum of digits");
    scanf("%d",&num);
    while (num > 0) {
        int lsd=num%10;
        sum+=lsd;
        num/=10;
    }
    printf("Sum of digits = %d",sum);


    return 0;
}