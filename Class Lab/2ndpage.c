#include<stdio.h>

int main()
{ 
    int i;  
    for ( i = 0; i < 20; i++)
    {
        switch (i)
        {
        case 0:
            i+=5;
            printf("value of i is case 0 is %d\n", i);
            
        case 1:
            i-=2;
            printf("value of i is case 1 is %d\n", i);
            
        case 5:
            i+=6;
            printf("value of i is case 5 is %d\n", i);
            

        default:
            i+=4;
            printf("value of i is case default is %d\n", i);
            
            
        }
        
    }printf("value of i after the compoletion of loop is %d\n", i);
    
    return 0;
}