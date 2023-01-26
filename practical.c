#include<stdio.h>

int main()
{


    // 1-
    // int a,b;
    // printf("Enter the a & b:");
    // scanf("%d %d",&a,&b);
    // a = a+b;
    // b = a-b;
    // a = a-b;
    // printf("%d\n", a);
    // printf("%d\n", b);

    // 2-
    // int a,b,temp;
    // printf("Enter the a & b");
    // scanf("%d %d",&a,&b);
    // temp = a;
    // a = b;
    // b = temp;
    // printf("%d\n", a);
    // printf("%d\n", b);

    // 3-
    // char ch;
    // printf("Enter the char:");
    // scanf("%c",&ch);
    // switch (ch)
    // {
    // case 'a':
    //     printf("vowel");
    //     break;
    // case 'e':
    //     printf("vowel");
    //     break;
    // case 'i':
    //     printf("vowel");
    //     break;
    // case 'o':
    //     printf("vowel");
    //     break;
    // case 'u':
    //     printf("vowel");
    //     break;
    // case 'A':
    //     printf("vowel");
    //     break;
    // case 'E':
    //     printf("vowel");
    //     break;
    // case 'I':
    //     printf("vowel");
    //     break;
    // case 'O':
    //     printf("vowel");
    //     break;
    // case 'U':
    //     printf("vowel");
    //     break;
    // default:
    //     printf("consonent");
    //     break;
    // }
    // char character;
    // printf("Enter the character:");
    // scanf("%c",&character);
    // if (character >= 'a' && character <= 'z')   
    // {
    //     character = character-32;
    //     printf("%c\n", character);
    // }
    // else
    // {
    //     character = character + 32;
    //     printf("%c\n", character);
    // }

    // float a,b,c,r,root1,root2,real,img;
    // printf("Enter the a,b ,c:");
    // scanf("%f %f %f",&a,&b,&c);
    // r = (b*b-4*a*c);
    // if (r >=0)
    // {
    //     root1 = -b+sqrt(r);
    //     root2 = -b - sqrt(r);
    //     printf("Root 1 :%.2f & Root 2 :%.2f\n",root1,root2 );
    // }
    // else
    // {
    //     real = -b/2*a;
    //     img = sqrt(-r)/2*a;
    //     printf("first root:%.2f+i%.2f & second root:%.2f-i%.2f",real,img,real,img);
    // }

    // int a,b,choice,answer;
    // printf("Enter a & b:");
    // scanf("%d %d",&a,&b);
    // printf("press 1 for + \n");
    // printf("press 2 for - \n");
    // printf("press 3 for * \n");    
    // printf("press 4 for / \n");
    // scanf("%d\n",&choice);
    // switch (choice)
    // {
    // case 1:
    //     answer = a+b;
    //     printf("%d\n", answer);
    //     break;
    // case 2:
    //     answer = a-b;
    //     printf("%d\n", answer);
    //     break;
    // case 3:
    //     answer = a*b;
    //     printf("%d\n", answer);
    //     break;
    // case 4:
    //     answer = a/b;
    //     printf("%d\n", answer);
    //     break;
    // default:
    //     printf("wrong choice");
    //     break;
    // }

    // int a,b,c;
    // printf("Enter the a,b,c");
    // scanf("%d %d %d", &a,&b,&c);
    // if (a>b)
    // {
    //     if (a>b)
    //     {
    //         printf("%d\n", a);
    //     }
    //     else
    //     {
    //         printf("%d\n", c);
    //     }
    // }
    // else if (b>c)
    // {
    //     printf("%d\n", b);
    // }
    // else
    // {
    //     printf("%d\n", c);
    // }   
    
    // int num,sum = 0;
    // printf("Enter the number:");
    // scanf("%d",&num);
    // while (num != 0)
    // {
    //     sum = sum+(num%10);
    //     num = num/10;
    // }
    // printf("%d\n", sum);

    // int num,mul = 1;
    // printf("Enter the num:");
    // scanf("%d",&num);
    // while (num != 0)
    // {
    //     mul = mul*(num%10);
    //     num = num/10;
    // }
    // printf("%d\n", mul);
    
    // char a;
    // printf("enter");
    // gets();
    // int x;
    // char y;
    // float z;
    // x = sizeof(32);
    // printf("%d\n", x);
    // y = sizeof('a');
    // printf("%d\n", y);
    // z = sizeof(2.65);
    // printf("%d\n", z);
    // int x = 3%4;
    // printf("%d\n", x);
    // int a = ~12;
    // printf("%d\n", 23&56);
    
    // int i = 1,x;
    // while (i<=5)
    // {
    //   printf("Enter the number:");
    //   scanf("%d",&x);
    //   if (x>0)
      
    //     break;
    //   i++;
    // }
    // i == 1?printf("ends normally"):printf("applied break");

    printf("Press 1 for addition\n");
    printf("press 2 for odd-even\n");
    printf("Press 3 for first n natural numebr\n");
    printf("Enter your choice numebr\n");
    int choice;
    int number;
    int num1,num2;
    int num;
    scanf("%d\n",&choice);
    switch (choice)
    {
    case 1:
      printf("Enter the first number:");
      scanf("%d",&num1);
      printf("Enter the second number:");
      scanf("%d",&num2);
      printf("Result:%d\n", num1+num2);
      break;
    case 2:
      printf("Enter the number");
      scanf("%d",&num);
      if (num % 2 == 0)
      {
        printf("Even Number");
      }
      else
      {
        printf("Odd Number");
      }
    break;
    case 3:
      printf("Enter the number:");
      scanf("%d",&number);
      for (int i = 0; i < number; i++)
      {
        printf("%d\n", i);
      }
      break;
    default:
    printf("Wrong choice");
     
    }
    
   return 0;
}