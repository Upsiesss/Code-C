/*To check if the entered triangle is valid or not*/
/*Author:Mugdha         Date:22-06-26*/
#include <stdio.h>

int main()
{
    int a1,a2,a3,sum=0;
    printf("Enter the angles of a triangle one by one: \n");
    scanf("%d\n%d\n%d",&a1,&a2,&a3);
    if((0<a1<180)&&(0<a2<180)&&(0<a3<180))
    {
        sum = a1 + a2 + a3;
        if (sum == 180)
            printf("Valid Triangle");
        else
            printf("Invalid Triangle");
    }
    else
        printf("Invalid Triangle");
    return 0;
}