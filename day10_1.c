// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
int main() {
    int s1,s2,s3;
    printf("Enter the three sides of the triangle");
    scanf("%d %d %d",&s1, &s2, &s3);
    if (s1 == s2 && s2 == s3) {
        printf("The triangle is equilateral");
    }
    else if (s1 == s2 || s2 == s3 || s1 == s3) {
        printf("The triangle is isosceles");
    }
    else if (s1 != s2 && s2 != s3) {
        printf("The triangle is scalene");
    }
    return 0;
}