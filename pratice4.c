//calculating area & perimeter of rectrangle also area & circumference of circle//

#include <stdio.h>

int main()
{
    float L, B, R, RA, CA, PR, CC;

    //rectrangle calculations//

    printf("\nCALCULATION FOR RETRANGLE");

    printf("\nGive the length of the rectriangle:");
    scanf("%f", &L);

    printf("\nGive the breadth of rectriangle:");
    scanf("%f", &B);

    RA = L*B ;
    PR = 2*(L+B);

    printf("\nArea of rectrangle is:%f\n", RA);
    printf("\nPerimeter of rectrangle is:%f\n", PR);
    //------------------------------------------//

    //Circle calculation//

    printf("\nCALCULATION OF CIRCLE");

    printf("\nGive the radius of circlr:");
    scanf("%f", &R);

    CA = 3.14*(R*R);
    CC = 2*3.14*R ;

    printf("\nArea of circle:%f\n", CA);
    printf("\nCircumference of circle:%f\n", CC);
    //-------------------------------------------//


    return 0;
}
