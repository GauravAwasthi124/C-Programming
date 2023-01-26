#include<stdio.h>
#include<string.h>


int main()
{
    // Relation Operator
    int a,b;
    printf("Enter the a:-");
    scanf("%d",&a);

    printf("Enter the b:-");
    scanf("%d",&b);
    
    
    printf("%d\n", a<=b);
    printf("%d\n", b<=a);
    printf("%d\n", a<b);
    printf("%d\n", a>b);
    printf("%d\n", a==b);
    printf("%d\n", a!=b);
    return 0;
}