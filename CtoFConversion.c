#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    float c,f;
    printf("Enter the temprature in celsius:");
    scanf("%f",&c);
    f=c*(9/5)+32;
    printf("The equivalent temprature in Fahrenheit is:%0.2f*F",f);

    return 0;
}
