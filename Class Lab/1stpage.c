#include<stdio.h>

int main()
{   
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    if (number % 2 == 0)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd number");
    }
    
    return 0;
}