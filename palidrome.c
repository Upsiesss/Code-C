/*To find the reverse of a number*/
/*Author:Mugdha    Date: 22-06-26*/

#include <stdio.h>

int main()
{
    long n,rev=0,copy=0;
    int d;
    
    printf("Enter your number: ");
    scanf("%ld",&n);
    copy = n;
    while(n>0)
    {
        d=n%10;
        rev = rev*10 + d;
        n = n/10;
    }
    printf("The reverse is %ld\n",rev);
    if(rev == copy)
        printf("The number is palindrome");
    else
        printf("The number is not a palindrome");
    return 0;
}
