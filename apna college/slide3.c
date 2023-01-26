#include<stdio.h>
#include<string.h>


int main()
{
    // Logical Operator
    int a,b;
    printf("Enter the a:--");
    scanf("%d",&a);

    printf("Enter the b:--");
    scanf("%d",&b);

    printf("%d\n", a&&b);
    printf("%d\n", a||b);
    printf("%d\n", !a);
    printf("%d\n", !b);
    return 0;
}