/*first praticeb sheet*/
#include <stdio.h>

int main()
{
    int AP, OD, MP, TOTAL_POPULATION ;
    printf("\nPopulation of AP:");
    scanf("%d", & AP);
    printf("\nPopulation of OD:");
    scanf("%d", & OD);
    printf("\nPopulation of MP:");
    scanf("%d", & MP);
    TOTAL_POPULATION = AP+MP+OD ;
    printf("Total Population of all the three state = %d\n", TOTAL_POPULATION);


        return 0;
}
