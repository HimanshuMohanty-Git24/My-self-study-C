#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    float height,mass,bmi;
    printf("Enter your Height(in centimeter):");
    scanf("%f",&height);
    printf("Enter your weight(in kilogram):");
    scanf("%f",&mass);

    bmi = (mass/pow(height,2))*10000;
    printf("Your BMI is:%f\n",bmi);

    if(bmi<15)
        printf("Starvation category\n");
    else if(bmi>=15.1&&bmi<=17.5)
        printf("Anorexic category\n");
    else if(bmi>=17.6&&bmi<=18.5)
        printf("underweigt category\n");
    else if(bmi>=18.6&&bmi<=24.9)
        printf("Ideal category\n");
    else if(bmi>=25&&bmi<=29.9)
        printf("Overweight category\n");
    else if(bmi>=30&&bmi<=39.9)
        printf("Obese category\n");
    else
        printf("Morbidly obese\n");
    
    return 0;
}
