/*Calculation of paper sizes*/
/*Author:Mugdha    Date: 16-06-26*/

#include <stdio.h>

int main()
{
   float l =1189,b=841,copy_l=1189/2;
   int i;
   for (i=0; i<9;i++)
   {
        printf("A%d length = %f breadth = %f\n",i,l,b);
        l=b;
        b=copy_l/2;
        copy_l = l/2;   
   } 
   return 0;
}