/*Checking location of point with respect to a circle*/
/*Author:Mugdha         Date:22-06-26*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,X,Y,r=0,d=0;
    printf("Enter the x and y coordinates of the center of the circle: \n");
    scanf("%f\n%f",&a,&b);
    printf("Enter the x and y coordinates of the point: \n");
    scanf("%f\n%f",&X,&Y);
    printf("Enter radius: ");
    scanf("%f",&r);
    d = sqrt(pow((X-a),2.0) + pow((Y-b),2.0));
    if(d==r)
        printf("The point is on the perimeter of the circle");
    else
    {
        if(d<r)
            printf("The point is in the circle");
        if(d>r)
            printf("The point is out of the circle");
    }
    return 0;


}