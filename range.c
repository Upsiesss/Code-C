/*To find the range of numbers*/
/*Author:Mugdha         Date: 03-07-26*/

#include <stdio.h>

int main()
{
    int n,num,max,min,range=0;
    char ch;
    printf("Enter number: ");
    scanf("%d",&n);
    max = n;
    min = n;
    do
    {
        printf("\nEnter number: ");
        scanf("%d",&num);
        if(num>max)
            max = num;
        if(num<min)
            min = num;
        printf("Do you want to continue Y/N?");
        scanf(" %c",&ch);
        if(ch=='N'||ch=='n')
            break;

    }
    while (1);

    printf("The minimum is %d and the maximum is %d and the range is %d",min,max,(max-min));

    
}