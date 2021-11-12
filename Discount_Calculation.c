//discount calculation
#include<stdio.h>

int main()
{
    int dis, qty;
    float tot, rate;

    printf("\nEnter THe qunatity and rate");
    scanf("%d %f", &qty, &rate);
    
    if (qty>1000)
        dis=10;
    else
        dis = 0;

    tot = (qty*rate)-(qty*rate*dis/100);

    printf("Total expenxe = Rs.%f\n", tot);

    return 0;
}
