/*To create a 4 layered pyramid of numbers*/
/*Author:Mugdha         Date:07-07-26*/

#include <stdio.h>

int main()
{
    int i,j,k=1,x;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==1)
                {
                    for(x=4-i;x>=0;x--)
                        printf(" ");
                }
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
    return 0;

}