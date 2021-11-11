// Finding the revrse of a 5 digit number
#include <stdio.h>

int main()
{
    int num, a, b, c, d, e;
    long int rev ;

    printf("\n Enter the five digit number(less than 36767): \n");
    scanf("%d", &num);

    a = num%10;
    num = num/10;

    b = num%10;
    num = num/10;

    c = num%10;
    num = num/10;

    d = num%10;
    num = num/10;

    e = num%10;

    rev = a*10000 + b*1000 + c*100 + d*10 + e ;

    printf("\nThe reversed 5 digit number is:%d\n", rev);


    return 0;
}
