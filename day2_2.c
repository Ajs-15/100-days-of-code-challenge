// Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
#include <math.h>
int main() {
    float pi = 3.14159;
    int radius;
    printf("Enter the radius of the circle");
    scanf("%d", &radius);
    float area = pi * pow(radius,2);
    printf("Area = %.2f",area);
    float  circumference  = 2 * pi * radius;
    printf("Circumference  = %.2f", circumference);


    return 0;
}