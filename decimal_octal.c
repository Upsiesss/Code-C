/*To convert decimal to octal*/
/*Author:Mugdha         Date: 03-07-26*/

#include <stdio.h>

int main()
{
    int n, rem =0, octal =0;
    printf("Enter number: ");
    scanf("%d",&n);

    while(n>0)
    {
        rem = rem*10 + n%8;
        n/=8;
    }

    while(rem>0)
    {
        octal = octal*10 + rem%10;
        rem/=10;
    }
    printf("The octal form of the number is %d",octal);
    return 0;
}