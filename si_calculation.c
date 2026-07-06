/*To calculate the simple interest of 3 values*/
/*Author:Mugdha         Date: 03-07-26*/

#include <stdio.h>

int main()
{   
    
    int i=0;
    float p,n,r,si=0;
    while(i<3)
    {
        printf("Enter the values of principal and number of years and rate of Simple Interest\n");
        scanf("%f\n%f\n%f",&p,&n,&r);
        si = p*n*r/100;
        printf("Simple Interest: %f\n",si);
        i++;
    }
    return 0;
}