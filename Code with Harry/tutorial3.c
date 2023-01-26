#include<stdio.h>

int main()
{
    int a,b=1;
    printf("Enter the number:");
    scanf("%c",&a);
    for (int i = a; i >= 1; i--)
    {
        for (int j = 1; j <= i-1; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= b; k++)
        {
            printf("*");
        }
        printf("\n");
        b++;
    }
    return 0;
}