/*To calculate simple interest for 3 years*/
/*Author:Mugdha         Date:06-07-26*/

#include <stdio.h>
int main()
{
    float si,p,r;
    int i,n;
    for(i=0;i<3;i++)
    {
        printf("Enter the values of principal and number of years and rate per annum\n");
        scanf("%f\n%d\n%f",&p,&n,&r);

        si = p*n*r/100;
        
        printf("The simple interest is %f",si);
        return 0;
    }
}
