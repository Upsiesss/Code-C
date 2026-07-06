/*To play a matchstick game where the computer always wins*/
/*Author:Mugdha         Date: 03-07-26*/

#include <stdio.h>

int main()
{
    int matches=21,user,comp;
    printf("We have 21 total matches and you need to choose matchsticks 1-4 and the one who picks up the last matchstick loses\n");

    while(matches>=1)
    {
    printf("Enter your choice: ");
    scanf("%d",&user);
    if(user<1 || user>4)
    {
         printf("Please re-enter\n");
        break;
    }
    comp = 5-user;
    printf("Computer chose %d matches\n",comp);
    matches = matches-comp-user;

    if(matches==1)
    {  
        printf("Computer wins!");
        break;
    }
    }
    return 0;
}