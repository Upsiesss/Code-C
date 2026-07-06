/*To calculate the gross salary depending on the threshold*/
/*Auhtor:Mugdha     Date:22-06-26*/

#include <stdio.h>

int main()
{
    float basic,DA,HRA,gross=0;
    printf("Enter your basic salary: ");
    scanf("%f",&basic);
    if (basic < 1500)
    {
        HRA = basic*0.1;
        DA = basic*0.9;
    }
    else
    {
        HRA = 500;
        DA = 0.98*basic;
    }
    gross = basic+DA+HRA;
    printf("Your gross salary is %f",gross);
    return 0;
}