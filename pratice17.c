//finding yougest among 3 friends
#include<stdio.h>

int main()
{
    int r,s,a,young;
    printf("Enter the age of ram,shyam & ajay:");
    scanf("%d%d%d",&r,&s,&a);

    if (r<s)
    {
        if (r<a)
            young=r;
        else
            young=a;
        
    }
    else
    {
        if (s<a)
            young = s;
        else 
            young = a;    
    }

    printf("The youngest of ram(%d),shyam(%d) and ajay(%d) is %d",r,s,a,young);
    
    return 0;
}
