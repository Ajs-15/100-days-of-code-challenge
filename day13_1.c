// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main() {
    int choice;
    int a,b;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    printf("1.Sum \n 2.Difference \n 3.Product \n 4.Division \n 5.Remainder");
    scanf("%d",&choice);
    switch (choice) {
        case 1:
            printf("Sum = %d",a+b);
            break;
        case 2:
            printf("Difference = %d", a-b);
            break;
        case 3:
            printf("Product = %d",a*b);
            break;
        case 4:
            printf("Division = %d",a/b);
            break;
        case 5:
            printf("Remainder = %d",a%b);
            break;
        default:
            printf("Invalid choice");
    }
    return 0;

}