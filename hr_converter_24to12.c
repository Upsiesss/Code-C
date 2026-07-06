/*A program that converts 24 hour clock to 12hours*/
/*Author:Mugdha         Date:07-07-26*/

#include <stdio.h>

int main()
{
    float hr;
    printf("Enter the hours in 24hour clock and separate minutes with decimal point: ");
    scanf("%f",&hr);
    //Because scanf has 0.00 from initialisation
    if (scanf("%f", &hr) != 1) 
    {
        printf("Invalid input! Please enter a number\n");
        return 1; // Exit the program early
    }
    if(hr ==0 || hr==24)
        printf("Midnight");
    else if(hr>0 && hr<12)
        printf("%.2f AM",hr);
    else if(hr==12)
        printf("12 noon");
    else if(hr>12 && hr<24)
        printf("%.2f PM",hr-12);
    else
        printf("Invalid time");
    return 0;
}