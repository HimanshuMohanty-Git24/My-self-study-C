#include<stdio.h>

int main(int argc, char const *argv[])
{
    int p,n,count;
    float r,si;
    count = 1;
    while(count<=3)
    {
    printf("\nEnter the value of p,n,r respectively:");
    scanf("%d%d%f",&p,&n,&r);
    si = p*n*r/100;
    printf("The simple intrest is:Rs%f",si);
    count++;
    }
    return 0;
}
