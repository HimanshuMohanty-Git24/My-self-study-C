#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n1,n2,n3,ls;
    printf("\nEnter three number:");
    scanf("%d%d%d",&n1,&n2,&n3);

    if (n1>n2)
    {
        if(n1>n3)
        { 
            ls = n1;
        }
        else
        {
            ls = n3;
        }

    }
    else
    {
        if(n2>n3)
        {
            ls = n2;
        }
        else
        {
            ls = n3;
        }
    }
    
    printf("The largest number is:%d",ls);

    
    return 0;
}    