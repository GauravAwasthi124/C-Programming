#include<stdio.h>

int main()
{
    int x,y,z,k = 10;
    k += (x=5,y=x+2,z=x+x);
    printf("%d %d %d %d\n", x,y,z,k);
    
    return 0;
}