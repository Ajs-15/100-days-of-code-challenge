    // Write a program to take a number as input and print its equivalent binary representation
    #include <stdio.h>
    int main() {
        int binary , decimal = 0;
        printf("Enter the decimal number");
        scanf("%d",&decimal);
        int place = 1;
        while (decimal > 0){
            int remainder = decimal % 2;
            binary = binary + (remainder*place);
            decimal = decimal /2;
            place *=10;
        }
        printf("Binary = %d", binary);
        return 0;
    }
