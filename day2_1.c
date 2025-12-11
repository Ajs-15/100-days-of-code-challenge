// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main() {
    int length,width;
    printf("Enter length and width of the rectange");
    scanf("%d %d",&length,&width);
    printf("Area = %d \n", length*width);
    printf("Perimeter  = %d",2*(length+width));
    return 0;
}