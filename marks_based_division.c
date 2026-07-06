/*To find the division of the student*/
/*Author:Mugdha         Date:27-06-26*/
#include <stdio.h>

int main()
{
    int marks, total=0,i;
    float per;
    for(i=1;i<=5;i++)
    {
        printf("Enter your marks in a subject: ");
        scanf("%d",&marks);
        total += marks;
    }
    per = total/5;
    if(per>=60)
    {
        printf("You got %f and first division",per);
    }
    else if(per>=50)
    {
        printf("You got %f and second division",per);
    }
    else if(per>=40)
    {
        printf("You got %f and third division",per);
    }
    else
    {
        printf("You failed");
    }
    return 0;
}