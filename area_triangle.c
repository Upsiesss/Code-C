/*Finding area of any triangle*/
/*Author:Mugdha    Date: 17-06-26*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,s=0,area=0;
    printf("Enter the values of sides of the triangle: \n");
    scanf("%f \n%f \n%f",&a,&b,&c);
    s = (a+b+c)/2.0;
    area = sqrt((s)*(s-a)*(s-b)*(s-c));
    printf("The area of triangle = %f unit^2",area);
    return 0;
}