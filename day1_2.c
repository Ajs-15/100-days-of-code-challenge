// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main() {
    int a,b,sum,diff;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    printf("Sum = %d",a+b);
    printf("Difference  = %d", a - b);
    printf("Product  = %d", a*b);
    if (b!=0) {
        printf("Quotient  = %d",a/b);
    }
    else {
        printf("Divison by zero error");
    }
    return 0;
}
