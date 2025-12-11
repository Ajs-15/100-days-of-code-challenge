// Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main() {
    float principal,rate,time;
    printf("Enter principal,rate,time: ");
    scanf("%f %f %f", &principal,&rate,&time);
    float SI = (principal * rate * time)/100;
    double a = principal * pow(1+rate/100.0,time);
    double CI = a - principal;
    printf("Simple Interest  = %.2f", SI);
    printf("Compound Interest  = %.2lf",CI);
    return 0;
}
