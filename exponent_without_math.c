/*To calculate the exponent of a number to another number*/
/*Author:Mugdha         Date: 03-07-26*/

#include <stdio.h>

int main()
{
    printf("Enter the number which you want in the order of base and power\n");
    int a,b,i=0,exp=1;
    scanf("%d\n%d",&a,&b);
    while(i<b)
    {
        exp = exp*a;
        i++;
    }

    printf("The value of %d raised to %d is %d",a,b,exp);
    return 0;
    

}