// Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n,sum=0;
    int counter = 0;
    printf("Enter the range of numbers");
    scanf("%d",&n);
    for (int i =1; ; i++) {
        if (i %2 != 0) {
            sum+=i;
            counter++;
            if (counter == n) {
                break;
            }
        }

    }

    printf("Sum = %d",sum);
    return 0;
}