//sum of digits of five digit number
#include<stdio.h>

int main()
{
    int a, n, num;
    int sum = 0;

    printf("\nEnter the five digit number:");
    scanf("%d", &num);

    a = num%10;
    n = num/10;
    sum = sum+a;

    a = n%10;
    n = n/10;
    sum = sum+a;

    a = n%10;
    n = n/10;
    sum = sum+a;

    a = n%10;
    n = n/10;
    sum = sum+a;

    a = n%10;
    n = n/10;
    sum = sum+a;

    printf("The sum of digits of number %d is %d\n", num,sum);
    


    return 0;
}
