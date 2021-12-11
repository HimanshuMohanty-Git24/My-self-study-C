#include<stdio.h>

int main(int argc, char const *argv[])
{
    int s1,s2,s3,ls,sum,a,b,c;
    printf("\nEnter the sides of triangle:");
    scanf("%d%d%d",&s1,&s2,&s3);

    if (s1>s2)
    {
        if(s1>s3)
        {
            sum=s2+s3; 
            ls = s1;
        }
        else
        {
            sum = s1+s2;
            ls = s3;
        }

    }
    else
    {
        if(s2>s3)
        {
            sum = s1+s3;
            ls = s2;
        }
        else
        {
            sum = s2+s1;
            ls = s3;
        }
    }
    if(sum>ls) 
          printf("\nIt is a valid triangle\n");
    else
        printf("\nIt is not a triangle\n");

    
    return 0;
}    