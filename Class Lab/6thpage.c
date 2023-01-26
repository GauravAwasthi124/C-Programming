#include<stdio.h>



int main()
{
    int a = 5,b = 2;
    switch (a+=b-=a+=b)
    {
    case 1:
        printf("one");
        break;
    case 2:
        printf("two");
        break;
    case 3:
        printf("three\n");
        break;
    case 4:
        printf("four");
        break;

    default:
        printf("default");
        break;
    }
    return 0;
}