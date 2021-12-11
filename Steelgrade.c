#include<stdio.h>

int main(int argc, char const *argv[])
{
    int hd,ts;
    float cc;
    printf("Enter the hardness of steel produce:");
    scanf("%d",&hd);
    printf("Enter the carbon content of steel produce:");
    scanf("%f",&cc);
    printf("Enter the Tensile strength of steel produce:");
    scanf("%d",&ts);

    if(hd>10&&cc<0.7&&ts>5600)
        printf("It is a grade 10 steel");
    else if(hd>10&&cc<0.7)
        printf("It is a grade 9 steel");
    else if(cc<0.7&&ts>5600)
        printf("It is a grade 8 steel");
    else if(hd>10&&ts>5600)
        printf("It is a grade 7 steel");
    else if(hd>10||cc<0.7||ts>5600)
        printf("It is a grade 6 steel");
    else
        printf("It is a grade 5 steel");
    
    
    return 0;
}
