// Write a program to input a year and check whether it is a leap year or not using conditional statements.
// Year is a leap year if divisible by 4 but not 100, except if divisible by 400.
#include <stdio.h>
int main() {
    int year;
    printf("Enter the year you want to check: ");
    scanf("%d",&year);
    if (year%4 == 0) {
        if (year%100 != 0) {
            if (year%400 == 0) {
                printf("It is a leap year");
            }
            else{
                printf("It is not a leap year");

            }
        }
        else {
            printf("Not a leap year");
        }
        return 0;
    }
}