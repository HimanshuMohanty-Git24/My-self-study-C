#include<stdio.h>
int main(int argc, char const *argv[])
{
    int m=21,p,c;
    while (1)
    {
        printf("\n\nNo. of matches left=%d\n",m);
        printf("Pick up 1,2,3,4 matches:");
        scanf("%d",&p);
        if(p>4||p<1)
           continue;//it runs the loop again
            m=m-p;
            printf("No. of matches left=%d\n",m);
            c=5-p;//this condition is the reson comp. wins
            printf("Out of which computer picked up %d\n",c);
            m=m-c;
            if(m==1)
            {
                printf("Number of matches left %d\n\n",m);
                printf("You lost the game!!\n");
                break;

            }
    }
    
    return 0;
}
