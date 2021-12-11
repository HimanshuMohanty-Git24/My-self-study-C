#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int i,a,b,c;
    i=1;
    printf("All armstrong num between 1-500");
    while (i<=500)
    {
       a=i%10;
       b=i%100;
       b=(b-a)/10;
       c=i/100;
       if((a*a*a)+(b*b*b)+(c*c*c)==i&&i!=1)
       {
         printf("\n%d\n",i);
       }
       i++;
    }
    

    return 0;
}
