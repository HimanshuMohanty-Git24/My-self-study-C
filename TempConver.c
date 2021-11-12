//conversion of fahrenheit to centigrade//
#include <stdio.h>
int main()
{
    float fr, cg ;

    printf("\nEnter the temprature in farenheit:");
    scanf("%f", &fr);
    cg = 5.0/9.0*(fr-32);
    printf("\nTemprature in centigrade is:%f\n", cg);
    printf("\nEnter the temprature in celcuis:");
    scanf("%f",&cg);
    fr = cg*(9.0/5.0)+32;
    printf("\nTemprature in farenheit is:%f\n",fr);

    return 0;
}
