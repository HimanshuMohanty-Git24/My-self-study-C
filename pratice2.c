/*calculate of mark*/
#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5, aggr;
    float per;
    printf("\nEnter mark in 5 subject:");
    scanf("%d\n%d\n%d\n%d\n%d\n", &m1, &m2, &m3, &m4, &m5 );
    aggr = m1+m2+m3+m4+m5 ;
    per = aggr/5 ;
    printf("\nAggregate Mark = %d\n", aggr);
    printf("\nPercentage Mark = %f\n", per);

    return 0;
}
