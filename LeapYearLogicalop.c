#include<stdio.h>

int main(int argc, char const *argv[])
{
    int yr;
    printf("\nEnter the year :");
    scanf("%d",&yr);

    if (yr%400==0||yr%100!=0||yr%4==0)
    {
        printf("This is a Leap year");  
    }
    else
    {
        printf("This is not a leap year");
    }
    
    
    return 0;
}
