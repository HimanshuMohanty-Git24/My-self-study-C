#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    float p,t,r;
    float si,ci;
    printf("Enter the Principle Amount:");
    scanf("%f", &p);
    printf("Enter the Time Period:");
    scanf("%f", &t);
    printf("Enter the rate:");
    scanf("%f", &r);
    si = (p*t*r)/100;
    ci = p*(pow((1+r/100),t)-1);
    printf("Your simple intrest is :%0.3f \n",si);
    printf("Your Compound intrest is :%0.3f \n",ci);
    return 0;
}
