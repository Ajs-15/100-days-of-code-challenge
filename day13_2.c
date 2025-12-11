// Q26: Write a program to print numbers from 1 to n.
#include <stdio.h>
int main() {
    int range;
    printf("Enter the range of n numbers");
    scanf("%d",&range);
    for (int i = 1; i <= range; i++) {
        printf("%d ",i);
    }
    return 0;
}