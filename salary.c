#include<stdio.h>

int main(int argc, char const *argv[])
{
    char g;
    int yrsexp,qual,sal;
    printf("Enter the and your Gender(M for male/F for female):");
    scanf("%c",&g);
    printf("Enter your Qualification(Enter 1 for Gradguate and 0 for Post Gradguate):");
    scanf("%d",&qual);
    printf("Enter your years of service:");
    scanf("%d",&yrsexp);

    
    if(g=='M'&&yrsexp>=10&&qual==0)
        sal=15000;
    else if((g=='M'&&yrsexp>=10&&qual==1)||(g=='M'&&yrsexp<10&&qual==0)||(g=='F'&&yrsexp<10&&qual==0))
        sal=10000;
    else if(g=='M'&&yrsexp<10&&qual==1)
        sal=7000;
    else if(g=='F'&&yrsexp>=10&&qual==0)
        sal=12000;
    else if(g=='F'&&yrsexp>=10&&qual==1)
        sal=9000;
    else if(g=='F'&&yrsexp<10&&qual==1)
        sal=6000;

    printf("\n\nThe salary you will get is  :%d\n",sal);
    

    return 0;
}
