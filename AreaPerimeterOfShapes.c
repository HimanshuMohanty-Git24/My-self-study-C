#include<stdio.h>
#include<math.h>
#define pi 3.14159
int main(int argc, char const *argv[])
{
    //circle
    float radius,carea,circumference;
    printf("Enter the value of radius of the circle:");
    scanf("%f",&radius);
    //square
    float side,sarea,sperimeter;
    printf("Enter the value of one side of the square:");
    scanf("%f",&side);
    //rectangle
    float length,breadth,rarea,rperimeter;
    printf("Enter the value of length and breadth of the square:");
    scanf("%f%f",&length,&breadth);
    //Cricle area
    carea = pi*pow(radius,2);
    printf("Cricle area:%0.2f\n",carea);
    //circle perimeter
    circumference = 2*pi*radius;
    printf("circle circumference:%0.2f\n",circumference);
    //square area
    sarea = pow(side,2);
    printf("square area:%0.2f\n",sarea);
    //square perimeter
    sperimeter = 4*side;
    printf("square perimeter:%0.2f\n",sperimeter);
    //rectangle area
    rarea = length*breadth;
    printf("rectangle area:%0.2f\n",rarea);
    //rectangle perimeter
    rperimeter = 2*(length+breadth);
    printf("rectangle perimeter:%0.2f\n",rperimeter);
    return 0;
}
