/*Sum of digits of a number entered by user*/
/*Author:Mugdha         Date:17-06-26*/

#include <stdio.h>

int main()
{
    long n;
    int d,sum=0;
    while (1)
    {
        printf("Enter your number: ",n);
        scanf("%ld",&n);
        if ((n>9999) && (n<=99999) )
        {
            while (n>0)
            {
                d=n%10;
                sum += d;
                n /= 10;

            }
            printf("The sum of each digit is:%ld",sum);
            break;
        }
    }
    return 0;
}