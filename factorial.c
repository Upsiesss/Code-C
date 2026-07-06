/*To calculate the factorial of a number*/
/*Author:Mugdha         Date: 03-07-26*/

#include <stdio.h>

int main()
{
    int n,i=1;
    long fact=1;
    printf("Enter number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        fact = fact*i;
        i++;
    }
    printf("The factorial of %d is %ld",n,fact);
    return 0;
}