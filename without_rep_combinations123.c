/*To output all the combinations of 123 without repition*/
/*Author:Mugdha         Date:06-07-26*/

#include <stdio.h>

int main()
{
    int i,j,k;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
                for(k=1;k<=3;k++)
                {
                    if(i!=j && j!=k && i!=k)
                        printf("%d %d %d \n",i,j,k);
                }
        }
        
    }
    return 0;
}