/*To check if a number is an armstrong number or not*/
/*Author:Mugdha         Date: 03-07-26*/

#include <stdio.h>
#include <math.h>
int main()
{
    int n,copy,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    copy = n;
    while(n>0)
    {
        sum += pow((n%10),3.0);
        n /= 10;
    }
    if(sum == copy)
        printf("Armstrong!");
    else
        printf("Non Armstrong");
    return 0;
}