#include<stdio.h>

int main(int argc, char const *argv[])
{
    int yr;
    printf("\nEnter the year :");
    scanf("%d",&yr);

    if (yr%4==0)
    {
        if (yr%100==0)
        {
            if(yr%400==0)
              printf("It is a Century leap year");
            else
                printf("This is not a Not a century leapyear");
        }
        else
        {
            printf("This is a leap year");
        }
        
    }
    else
    {
        printf("This is not a leap year");
    }
    
    
    return 0;
}
