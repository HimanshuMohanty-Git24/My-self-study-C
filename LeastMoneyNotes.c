// Find the least number of notes required to get the amount
#include<stdio.h>

int main()
{
    int amount, nohun, nofifty, noten, nofive, notwo, noone, total;

    printf("\nEnter the amount of money:");
    scanf("%d", &amount);

    nohun = amount/100;
    amount = amount%100;

    nofifty = amount/50;
    amount = amount%50;

    noten = amount/10;
    amount = amount%10;

    nofive = amount/5;
    amount = amount%5;

    notwo = amount/2;
    amount = amount%2;

    noone = amount/1;
    amount = amount%1;

    total = nohun + nofifty + noten + nofive + notwo + noone;

    printf("\nLeast number of notes required: %d\n", total);

    return 0;
}