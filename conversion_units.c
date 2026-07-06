/*Converting distance into different units*/
/*Author:Mugdha    Date: 16-06-26*/

#include <stdio.h>

int main()
{
    float km,m,ft,inch,cm;
    printf("Enter the distance in kilometres: ");
    scanf("%f",&km);
    m = km*1000;
    ft = m*3.281;
    inch = ft*12;
    cm = m*100;
    printf(" Distance in m %f \n Distance in ft %f \n Distance in inches %f \n Distance in cm %f",m,ft,inch,cm);
    return 0;
}
