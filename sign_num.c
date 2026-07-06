/*To check the type of number entered*/
/*Author:Mugdha         Date: 03-07-26*/

#include <stdio.h>

int main()
{
    int nctr=0, pctr=0, zctr=0;
    float n;
    char ch;
    do
    {
        printf("Enter a number: ");
        scanf("%f",&n);
        if(n>0)
            pctr++;
        else if(n<0)
            nctr++;
        else
            zctr++;
        printf("Do you want to continue Y/N\n");
        scanf(" %c",&ch);
        if(ch=='N' || ch=='n')
            break;
        printf("\n");
    }
    while(1);
    printf("You entered %d +ve numbers\nYou entered %d -ve numbers\nYou entered the number 0 %d times",pctr,nctr,zctr);  
    return 0;

}