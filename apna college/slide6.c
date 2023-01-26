#include<stdio.h>
#include<string.h>


int main()
{
    int a;
    printf("Press any number between 1 to 300\n");
    printf("Enter the number:--\n");
    scanf("%d",&a);

    if (a<=1 && a<=100)
    {
        printf("You are in section A & B");
    }
    else if (a <=101 && a<=200)
    {
        printf("You are in section C & D");
    }
    else if( a >=201 && a<=300)
    {
        printf("You are in section E & F");
    }
    
    else
    {
        printf("Sorry you choice wrong number");
    }
    
    return 0;
}