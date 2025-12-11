// Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main() {
    int totalseconds;
    printf("Enter the total number of seconds: ");
    scanf("%d",&totalseconds);
    int hours = totalseconds / 3600;
    int minutes = (totalseconds % 3600) / 60;
    int seconds = totalseconds  % 60;
    printf("%d:%d:%d",hours,minutes,seconds);

    return 0;
}