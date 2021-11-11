//calculation of profit and loss
#include<stdio.h>

int main()
{
    float sp, cp, l, p;

    printf("\nEnter the selling price and Cost price:");
    scanf("%f %f", &sp,&cp);

    p=sp-cp;
    l=cp-sp;

    if(p>0)
        printf("You have a profit of :%f", p);

    if (l>0)
        printf("You have made a loss of :%f", l);

    if (p==0)
        printf("\nYou have neither made any profit nor loss\n");
    
    return 0;
}
