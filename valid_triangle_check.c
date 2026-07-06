/*To calculate the salary of a person*/
/*Author:Mugdha         Date: 03-07-26*/

#include <stdio.h>

int main()
{
    int a,b,c,largest=0,sum=0;
    printf("Enter the sides of triangles a,b and c\n");
    scanf("%d\n%d\n%d",&a,&b,&c);
    largest = (a>b?(a>c?a:c):(b>c?b:c));
    sum = a + b + c - largest;
    if(sum>largest)
        printf("Valid");
    else    
        printf("Invalid");
    
    return 0;
}