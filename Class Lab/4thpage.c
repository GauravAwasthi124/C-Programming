#include<stdio.h>


int main()
{
    float salary;
    float HRA;
    float DA;
    
    printf("Enter your salary:");
    scanf("%f",&salary);
    if (salary<1500)
    {
        HRA = salary*0.1;
        DA = salary*0.9;       
    }
    else 
    {
        HRA = 500;
        DA = salary*9.8;
        
    }
    float gross_salary= HRA+DA+salary;
    printf("%f\n", gross_salary);
    
    return 0;
}