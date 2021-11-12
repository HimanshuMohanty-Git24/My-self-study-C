//converting cartesian coordinates to polar coordinates
#include<stdio.h>
#include<math.h>

int main()
{
    int x, y, r, theta;
    printf("Enter the value of x & y:");
    scanf("%d %d", &x,&y);

    r = sqrt(x*x+y*y);
    theta = atan2 (y, x);
    theta = theta*180/3.14;
    printf("r=%f theta = %f\n", r,theta);

    return 0;
}
