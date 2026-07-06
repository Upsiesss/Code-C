/*To print the sum of a series*/
/*Author: Mugdha        Date:06-07-26*/

#include <stdio.h>

int main()
{
    float i=1,j=1,prod=1;
    float sum=0;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=i;j++)
            prod=prod*j;
        sum+=i/prod;
    }
    printf("The sum is %f",sum);
    return 0;
}