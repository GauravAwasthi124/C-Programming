#include<stdio.h>

int main()
{
    int a = 1,b = 3;
    a +=b -= a -=b;
    printf("%d %d\n", a,b);
    return 0;
}