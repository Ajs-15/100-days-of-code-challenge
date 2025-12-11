// Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main(){
    int celsius;
    printf("Enter the temperature in celcius");
    scanf("%d", &celsius);
    int fahrenheit = (celsius * 9/5) + 32;
    printf("Temperature in fahrenheit  = %d", fahrenheit);
    return 0;
}