/*To check if the entered number is odd or even*/
/*Author:Mugdha     Date:22-06-26*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    if(n>=0)
    {
        if(n%2==0)
            printf("The number is even");
        else
            printf("The number is odd");
    }
    else
        printf("Enter a positive number");
    return 0;
}