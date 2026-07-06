/*To evaluate a given series*/
/*Author:Mugdha         Date:06-07-26*/
#include <math.h>
#include <stdio.h>
int main()
{
    float sum=0,i,x;

    printf("Enter the value who's natural log you want to find: ");
    scanf("%f",&x);
    for(i=1;i<=7;i++)
        sum += (1/i)*pow(((x-1)/x),i);
    
    printf("The approximate value of the natural log of %.0f is %f",x,sum);
    //Essentially rounding off float to the 0th place aka converting float to its nearest integer
    return 0;
}