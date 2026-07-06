/*To calculate sum of sin sq and cos sq*/
/*Author:Mugdha         Date: 03-07-26*/
#include <math.h>
#include <stdio.h>

int main()
{
    float a1_deg,a1_rad,sum=0;
    printf("Enter the value of your angle in degree\n");
    scanf("%f",&a1_deg);
    a1_rad = 180*a1_deg/3.14159;
    sum = pow(sin(a1_rad),2.0) + pow(cos(a1_rad),2.0);
    if(sum==1.0)
        printf("The sum is 1!");
    return 0;
}