#include<stdio.h>
int main()
{
    int a[50],n,l,s,i;
    printf("Enter the number:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
        l = s = a[0 ];
    for (int i = 0; i < n; i++)
    {
        if (a[i]>l)
        {
            l= a[i];
        }
        if (a[i]<s)
        {
            s = a[i];
        }
    }
    printf("\n");
    printf("%d\n", l);
    printf("%d\n", s);
    return 0;
}