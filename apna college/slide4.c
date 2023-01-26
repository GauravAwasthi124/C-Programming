#include<stdio.h>
#include<string.h>


int main()
{
    // Bitwise Operator
    int a,b;
    printf("Enter the a:--");
    scanf("%d",&a);

    printf("Enter the b:--");
    scanf("%d",&b);

    printf("%d\n", a&b);
    printf("%d\n", a|b);
    printf("%d\n", a^b);
    return 0;
}