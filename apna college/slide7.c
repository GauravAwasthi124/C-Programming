#include<stdio.h>
#include<string.h>


int main()
{
    /*
    int num;
    scanf("%d",&num);
    int i=1;
    while (i<=10)
    {
        printf("%d X %d = %d\n",num,i,num*i);
        i++;
    }
    
    int num;
    scanf("%d",&num);
    int i=1;
    do
    {
        printf("%d X %d = %d\n",num,i,num*i);
        i++;
    } while (i<=10);
    */
    int num;
    scanf("%d",&num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n",num,i,num*i);

    }
    
    return 0;
}