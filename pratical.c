#include<stdio.h>

int main()
{
   int number,temp,revertnumber = 0,reminder;
    printf("Enter the number:");
    scanf("%d",&number);
    temp = number;
    while (temp > 0)
    {
        reminder = temp % 10;
        temp = temp / 10;
        revertnumber = (revertnumber * 10) + reminder;
    }
    if (number == revertnumber)
    {
        printf("The number is Palindrome");
    }
    else
    {
        printf("The number is not Palindrome");
    }


    return 0;
}