/*To calculate the overtime pay*/
/*Author:Mugdha         Date: 03-07-26*/

#include <stdio.h>

int main()
{
    int x=0,pay=0,hr;
    while(x++<10)
    {
        printf("Enter your hours worked: ");
        scanf("%d",&hr);
        pay = hr>40?(120*(hr-40)):0;
        printf("Your overtime pay is: %d\n",pay);
    }
    return 0;
}