#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int x, y, z;    //sides of the triangle
    int max, flag=0;
    printf("Enter the first side: ");
    scanf("%d", &x);
    printf("Enter the second side: ");
    scanf("%d", &y);
    printf("Enter the third side: ");
    scanf("%d", &z);



    //equilateral means three (all) sides are of same length
    if (x==y && x==z)
    {
        printf("Triangle is equilateral.");
    }

    //isosceles means two sides are of same length
    else if (x==y || y==z || z==x)
    {
        printf("Triangle is isosceles.");
    }
    //right angled means it contains a 90 degree angled which satisfy Pythagoras Theorem
    //check for max side

    max = x;
    if (y>max)
        max = y;
    if (z>max)
        max = z;
    if (max == x)
    //Theorem
    {
        if(pow(max,2) == pow(y,2)+pow(z,2))
            flag=1;
    }

    if (max == y)
    //Theorem
    {
        if(pow(max,2) == pow(x,2)+pow(z,2))
            flag=1;
    }

    if (max == z)
    //Theorem
    {
        if(pow(max,2) == pow(x,2)+pow(y,2))
            flag=1;
    }

    if(flag==1)
    {
        printf("Triangle is right angled");
    }

}