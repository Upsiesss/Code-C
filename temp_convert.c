/*To convert temperature from Fahrenheit to celcius*/
/*Author:Mugdha    Date: 16-06-26*/

#include <stdio.h>

int main()
{
    float fah,cel=0;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&fah);
    cel = (fah - 32)*5/9;
    printf("The temperature converted into celcius is %f ",cel);
    return 0;
}