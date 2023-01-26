#include<stdio.h>


int main()
{
    char vowel ;
    printf("Enter the charactrer:");
    scanf("%c",&vowel);
    switch (vowel)
    {
    case 'a':
        printf("vowel");
        break;
    case 'e':
        printf("vowel");
        break;
    case 'i':
        printf("vowel");
        break;
    case 'o':
        printf("vowel");
        break;
    case 'u':
        printf("vowel");
        break;
    default:
        printf("Consonent");
        break;
    }
    return 0;
}