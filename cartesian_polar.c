/*To convert cartesian coordinates from user to polar form*/
/*Author: Mugdha            Date:21-06-26*/

#include <stdio.h>
#include <math.h>

int main()
{
    float x,y,r,phi;
    printf("Enter the cartesian x and y coordinates:\n");
    scanf("%f \n%f",&x,&y);
    r = sqrt((x*x)+ (y*y));
    phi = atan(x/y);
    printf("The values of polar coordinates are (%f,%f)",r,phi);
    return 0;
}
