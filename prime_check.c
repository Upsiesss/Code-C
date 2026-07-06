/*To check whether or not entered number is prime*/
/*Author:Mugdha         Date:06-07-26*/

#include <stdio.h>
int main()
{
    int n,ctr=0,i;
    printf("Enter your number: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%2==0)
            ctr++;
    }
    ctr==0?printf("Prime"):printf("Composite");
    return 0;
}