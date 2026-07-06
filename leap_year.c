/*Checking if entered year is a leap year or not*/
/*Author:Mugdha     Date:22-06-26*/

#include <stdio.h>

int main()
{
    int yr;
    printf("Enter the year you want to check: ");
    scanf("%d",&yr);
    if(((yr%4 == 0) && (yr%100 != 0)) || (yr%400 == 0))
        printf("Leap Year!");
    else
        printf("Not Leap Year :(");
    return 0;
}