//Finding area of triangle
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, s, ar;
    printf("\nEnter the sides of triangle:\n");
    scanf("%f%f%f", &a, &b, &c);
    s = (a+b+c)/2;

    ar = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area of required triangle is :%f\n", ar);

    return 0;
}
