/*To calculate area and perimeter of rectangle and area of circle*/
/*Author:Mugdha    Date: 16-06-26*/

#include <stdio.h>

int main()
{
    float l,b,r,ar_cir=0,ar_rec=0,per_rec=0;
    printf("Enter length and breadth of rectangle: \n");
    scanf("%f \n%f",&l,&b);
    printf("Enter radius of circle: \n");
    scanf("\n%f",&r);
    ar_rec = l * b;
    ar_cir = 3.14159 * r * r;
    per_rec = 2 * (l + b);
    printf("Area of rectangle = %f \nPerimeter of rectangle = %f \nArea of circle = %f",ar_rec,per_rec,ar_cir);
    return 0 ;
}