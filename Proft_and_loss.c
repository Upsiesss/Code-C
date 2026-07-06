/*To calculate whether or not profit or loss has been incurred*/
/*Author:Mugdha     Date:22-06-26*/

#include <stdio.h>

int main()
{
    float CP,SP,profit=0,loss=0,per=0;
    printf("Enter your Cost Price: ");
    scanf("%f",&CP);
    printf("Enter your Selling Price: ");
    scanf("%f",&SP);
    if (SP>CP)
    {
        profit = SP - CP;
        per = profit*100/CP;
        printf("You're in profit of %f rupees\nProfit percentage is %f",profit,per);
    }
    else
    {
        if (CP>SP)
        {
            loss = CP - SP;
            per = loss*100/CP;
            printf("You're in loss of %f rupees\nLoss percentage is %f",loss,per);
        }
        else
            printf("No profit No loss");
    }
    return 0;
}