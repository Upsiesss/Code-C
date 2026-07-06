/*To check if the driver satiates the conditions of being insured*/
/*Author:Mugdha         Date:27-06-26*/

#include <stdio.h>
int main()
{
    char gen,ms;
    int age;
    printf("Enter your marriage status\n");
    scanf("%c",&ms);
    printf("Enter your age\n");
    scanf("%d",&age);
    printf("Enter your gender\n");
    scanf(" %c",&gen);
    //The space before %c removes the \n (Enter) from the input buffer (IMPPPPPP)
    
    ((ms=='M')||(ms=='U' && gen=='F' && age>25)||(ms=='U' && gen=='M' && age>30))?printf("Insured"):printf("Not insured");
    return 0;
}