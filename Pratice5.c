// Multiplication Table//

#include <stdio.h>

int main()
{
    int nu, a, b, c, d, e, f, g, h, i, j;

    printf("Give the number you want multiplication table of:");
    scanf("%d", &nu);

    a = nu*1;
    b = nu*2;
    c = nu*3;
    d = nu*4;
    e = nu*5;
    f = nu*6;
    g = nu*7;
    h = nu*8;
    i = nu*9;
    j = nu*10;

    printf("\n%d*1=%d\n", nu, a);
    printf("\n%d*2=%d\n", nu, b);
    printf("\n%d*3=%d\n", nu, c);
    printf("\n%d*4=%d\n", nu, d);
    printf("\n%d*5=%d\n", nu, e);
    printf("\n%d*6=%d\n", nu, f);
    printf("\n%d*7=%d\n", nu, g);
    printf("\n%d*8=%d\n", nu, h);
    printf("\n%d*9=%d\n", nu, i);
    printf("\n%d*10=%d\n", nu, j);

    
    return 0;
}
