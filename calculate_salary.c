/*To calculate the salary of a person*/
/*Author:Mugdha         Date: 03-07-26*/

#include <stdio.h>

int main()
{
    char gen;
    int yr,Q,sal;
    printf("Enter your gender\n");
    scanf("%c",&gen);
    printf("Enter your yrs of service and qualification 0-UG 1-PG\n");
    scanf("%d\n%d",&yr,&Q);
    if(gen=='M')
    {
        (yr>=10?(Q==1?(sal = 11000):(sal = 10000)):(Q==1?(sal = 10000):(sal = 7000)));
    }
    else if(gen=='F')
    {
        (yr>=10?(Q==1?(sal = 12000):(sal = 9000)):(Q==1?(sal = 10000):(sal = 6000)));
    }
    printf("Salary is %d",sal);
    return 0;

}