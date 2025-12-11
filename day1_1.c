// Write a program to input two numbers and display their sum.
#include <stdio.h>
int main() {
    int a,b;
    printf("Enter two numbers");
    scanf("%d %d",&a ,&b);
    int sum = a + b;
    printf("Sum = %d",sum);
    return 0;
}