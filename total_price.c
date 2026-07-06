/*Calculating the total price*/
/*Author:Mugdha     Date:22-06-26*/

#include <stdio.h>
int main()
{
    int qty;
    float price,total_price=0;
    printf("Enter qty of items: ");
    scanf("%d",&qty);
    printf("Enter the price per item: ");
    scanf("%f",&price);
    total_price = price*qty;
    if (qty>1000)
    {
        total_price = total_price*0.9;
        printf("You got a discount of %f\n",(price*qty*0.1));
    }
    printf("The total price is %f",total_price);
    return 0;
}