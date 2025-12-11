// Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main() {
    int cp,sp;
    float profit,loss;
    printf("Enter cost price and selling price");
    scanf("%d %d",&cp,&sp);
    if (cp > sp) {
        loss = cp - sp;
        float loss_prcnt = (loss/cp)*100;
        printf("Loss %.2f",loss_prcnt);
    }
    else {
        profit = sp - cp;
        float profit_prcnt = (profit/cp)*100;
        printf("Profit %.2f",profit_prcnt);
    }

    return 0;
}