#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    char ch;
    i = 0;
    while (i<=255)
    {
        ch = i;
        printf("\nCharacter %d:%c\n",i,ch);
        i++;
    }
    
    return 0;
}
