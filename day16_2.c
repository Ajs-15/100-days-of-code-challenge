// Write a program to check if a number is a palindrome.
#include <stdio.h>
int main() {
    int num = 1;
    int og = 1;
    int rev =0;
    printf("Enter the number you want to check if is plaindrome");
    scanf("%d",&num);
    og = num;
    while (num > 0) {
        int lsd = num % 10;
        rev = (rev*10) + lsd;
        num=num/10;
    }
    if (og == rev) {
        printf("The number is palindrome");
    }
    else {
        printf("It is not");
    }

    return 0;
}