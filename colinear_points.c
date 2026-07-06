/*To check if points are collear or not */
/*Author:Mugdha     Date:22-06-26*/

#include <stdio.h>

int main()
{
    float x1,x2,x3,y1,y2,y3,area=0;
    printf("Enter the x and y coordinates of the first point: \n");
    scanf("%f\n%f",&x1,&y1);
    printf("Enter the x and y coordinates of the second point: \n");
    scanf("%f\n%f",&x2,&y2);
    printf("Enter the x and y coordinates of the third point: \n");
    scanf("%f\n%f",&x3,&y3);
    area = ((x1-x2)*(y2-y3))-((y1-y2)*(x2-x3));
    if (area == 0)
        printf("Colinear");
    else
        printf("NonColinear");
    return 0;

}