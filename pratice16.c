//Verifying if the reverse of a number is same
#include<stdio.h>

int main()
{
    int n,a,num;
    long int revn=0;
    
    printf("\nEnter the 5 digit number:");
    scanf("%d",&n);

    num = n;

    a = n%10;  //last digit
    n = n/10; //other number
    revn = revn+a*10000;
    a = n%10;  //4th digit
    n = n/10; //other number
    revn = revn+a*1000;
    a = n%10;  //3rd digit
    n = n/10; //other number
    revn = revn+a*100;
    a = n%10;  //2nd digit
    n = n/10; //other number
    revn = revn+a*10;
    a = n%10;  //1st digit
    revn = revn+a;

    printf("\nThe reverse number is:%d\n", revn);

    if (revn==num)
        printf("\nGiven no. & its reversed numbers are equal\n\n");
    else
        printf("\nGive no. & its reversed number  are not equal\n");    

    
    return 0;
}
