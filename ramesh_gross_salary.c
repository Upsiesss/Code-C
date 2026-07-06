/*To calculate the gross salary of Ramesh*/
/*Author:Mugdha    Date: 16-06-26*/

#include <stdio.h>

int main()
{
    float basic,da,hra,gross=0;
    printf("Enter basic salary: ");
    scanf("%f",&basic);
    da = 0.4*basic;
    hra = 0.2*basic;
    gross = da+basic+hra;
    printf("Ramesh's gross salary is %f",gross);
    return 0;
}