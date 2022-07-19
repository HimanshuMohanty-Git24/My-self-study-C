#include<stdio.h>

int main(int argc, char const *argv[])
{
    float num1,num2;
    float sum,sub,mul,div;
    printf("Enter two integer to perform Operation:");
    scanf("%f%f",&num1,&num2);
    sum = num1+num2;
    sub = num1-num2;
    mul = num1*num2;
    div = num1/num2;
    printf("\nSum of two integer %0.1f+%0.1f is :%0.1f",num1,num2,sum);
    printf("\nSubtration of two integer %0.1f-%0.1f is :%0.1f",num1,num2,sub);
    printf("\nMultiplication of two integer %0.1fx%0.1f is :%0.1f",num1,num2,mul);
    printf("\nDivision of two integer %0.1f/%0.1f is :%0.1f",num1,num2,div);
    return 0;
}
