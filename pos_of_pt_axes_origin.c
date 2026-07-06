/*Checking location of point on axes or origin*/
/*Author:Mugdha         Date:22-06-26*/

#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter the x and y coordinates of the point: \n");
    scanf("%f\n%f",&x,&y);
    if((x==0) && (y==0))
        printf("The point is the origin");
    if((x!=0) && (y==0))
        printf("The point is on X axis");
    if((x==0) && (y!=0))
        printf("The point is on Y axis");
    if(x>0)
    {
        if(y>0)
            printf("Q1");
        if(y<0)
            printf("Q4");
    }
    if(x<0)
    {
        if(y>0)
            printf("Q2");
        if(y<0)
            printf("Q3");
    }
    return 0;
}