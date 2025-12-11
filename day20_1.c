// Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main() {
    int prod,num;
    printf("Enter the number you want to get the sum of digits");
    scanf("%d",&num);
    while (num > 0) {
        int lsd=num%10;
        if (lsd % 2 != 0) {
            prod*=lsd;
        }

        num/=10;
    }
    printf("Sum of odd digits = %d",prod);


    return 0;
}