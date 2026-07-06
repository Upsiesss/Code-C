/*To convert any particular entered value into its absolute value*/
/*Author:Mugdha         Date:22-06-26*/

#include <stdio.h>

int main()
{
    float val;
    printf("Enter value: ");
    scanf("%f",&val);
    if(val>=0)
        printf("The absolute value is %f",val);
    else
        printf("The absolute value is %f", -val);
    return 0;
}