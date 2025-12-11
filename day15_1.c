// Write a program to calculate the factorial of a number
#include <stdio.h>
int main() {
    int num;
    int fact = 1;
    printf("Enter the number you want the factorial of: ");
    scanf("%d",&num);
    for (int i =1; i <= num; i++){
        fact*=i;
    }
    printf("Factorial = %d",fact);



    return 0;
}