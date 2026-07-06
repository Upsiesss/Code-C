/*To find the reverse of a number*/
/*Author:Mugdha    Date: 17-06-26*/

#include <stdio.h>

int main()
{
    long n,rev=0;
    int d;
    while (1)
    {
        printf("Enter your number: ");
        scanf("%ld",&n);
        if ((n>9999) && (n<=99999))
        {
            while(n>0)
            {
                d=n%10;
                rev = rev*10 + d;
                n = n/10;
            }
        printf("The reverse is %ld",rev);
        break;
        }
        
    }
    return 0;
}
