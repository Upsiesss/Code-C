/*Calculating compound interest*/
/*Author:Mugdha         Date:06-07-26*/

#include <stdio.h>
#include <math.h>
int main()
{
    float q,n,r,p,a;
    int i;
    for(i=0;i<10;i++)
    {
        printf("Enter the number of years: ");
        scanf("%f",&n);
        printf("Enter the pricipal value in rupees: ");
        scanf("%f",&p);
        printf("Enter the rate and number of times interest is compunded\n");
        scanf("%f %f",&r,&q); 

        a = p*(pow((1+(r/q)),(n*q)));
        printf("The final amt along with compound interest is %.2f\n",a);
        //To round off to 2nd decimal place for money
    }
    return 0;
}