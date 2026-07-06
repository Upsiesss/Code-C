/*To find the wind chill factor at a particular temperature and wind velocity*/
/*Author:Mugdha             Date:22-06-26*/

#include <stdio.h>
#include <math.h>

int main()
{
    float t,v,wcf=0;
    printf("Enter the temperature in Fahrenheit");
    scanf("%f",&t);
    printf("Enter the wind velocity");
    scanf("%f",&v);
    wcf = 35.74 + 0.6215*t + (0.4275*t - 35.75)*(pow(v,0.16));
    printf("The wind chill factor is %f",wcf);
    return 0;
}