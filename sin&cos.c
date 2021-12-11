#include<stdio.h>
#include<math.h>

int main()
{
    int angle,ans;
    printf("\nEnter the angle(In degree):");
    scanf("%d",&angle);

    ans = (pow(sin(angle),2)+pow(cos(angle),2));

    printf("\nThe value of the operation is:%d\n",ans);
    if(ans==1)
        printf("\nWe got the expected output that is 1\n");
    else
        printf("\nWe got a vale other than 1\n");
    return 0;
}
