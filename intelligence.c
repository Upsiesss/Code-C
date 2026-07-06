/*Inteligence of a person*/
/*Author:Mugdha         Date:06-07-26*/

#include <stdio.h>

int main()
{
    int y;
    float i,x;
    for(y=1,x=5.5;(y<=6 && x<=12.5); y++,x+=0.5)
    {
        //Formula to calculate intelligence
        i = 2 + (y+0.5*x);
        printf("%f\t%d\t%f\n",i,y,x);
    }
    return 0;
}