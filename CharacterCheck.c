#include<stdio.h>

int main(int argc, char const *argv[])
{
    char ch;
    printf("\nEnter the character:");
    scanf("%c",&ch);

    if(ch>=65&&ch<=90)
        printf("It's the captial letter %c ",ch);
    else if(ch>=97&&ch<=122)
        printf("It's the small letter %c ",ch);
    else if(ch>=48&&ch<=57)
        printf("It's the numeric value %c",ch);
    else if((ch>=0&&ch<=47)||(ch>=58&&ch<=64)||(ch>=91&&ch<=96)||(ch>=123&&ch<=127))
        printf("It's a special character %c",ch);

    
    return 0;
}
