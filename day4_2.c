// Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>
int main() {
    int n,i = 1;
    int sum = 0;
    scanf("%d",&n);
    while (i <= n) {
        sum+=i;
        i++;
    }
    printf("Sum  = %d",sum);

    return 0;
}