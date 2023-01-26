#include<stdio.h>
#include<string.h>

// Use of Operator
int main()
{
    // Arithmetic Operation
    int a,b;
    printf("Enter the a:--");
    scanf("%d",&a);

    printf("Enter the b:--");
    scanf("%d",&b);

    printf("sum:--%d\n", a+b);
    if (a>b)
    {
        printf("subtraction:--%d\n", a-b);
    }
    else
    {
        printf("subtraction:--%d\n", b-a);
    }
    
    printf("Multiplication:--%d\n", a*b);
    
    if (a>b)
    {
        printf("divsion:--%d\n", a/b);
    }
    else
    {
        printf("divsion:--%d\n", b/a);
    }
    
    if (a>b)
    {
        printf("modules:--%d\n",a%b);
    }
    else
    {
        printf("Modules:--%d\n", b%a);
    }
    
    return 0;
}