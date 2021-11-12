#include<stdio.h>

int main()
{
    int c,d, e;
    printf("\nEnter the number at location c:");
    scanf("%d", c);

    printf("\nEnter the number at location d:");
    scanf("%d", d);

    e=c;
    c=d;
    d=e;
    
    printf("New number at location c=%d\n",c);
    printf("New number at location d=%d\n",d);

    return 0;
}
