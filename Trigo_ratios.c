/*Calculating trigonometric ratios */
/*Author:Mugdha             Date: 22-06-26*/

#include <stdio.h>
#include <math.h>

int main()
{
    float angle;
    printf("Enter the value of an angle in radians: ");
    scanf("%f",&angle);
    printf(" Sin = %f\n Cos = %f\n Tan = %f\n Cot = %f\n Cosec = %f\n Sec = %f\n"
        ,sin(angle),cos(angle),tan(angle),1/tan(angle),1/sin(angle),1/cos(angle));
    return 0;
}