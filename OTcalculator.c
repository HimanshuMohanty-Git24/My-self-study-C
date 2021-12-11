#include<stdio.h>

int main(int argc, char const *argv[])
{
    float otpay;
    int hour,i=1;
    while(i<=10)
    {
        printf("\nEnter the hours you worked:");
        scanf("%d",&hour);
        if(hour>40)
        {
            otpay = (hour-40)*12;
            printf("\nYour Over Time pay is :Rs.%f\n",otpay);
        }
        else
        {
            otpay = 0;
            printf("\nYour Over Time pay is :Rs.%f\n",otpay);
        }

        i++;
    }
    

    return 0;
}
