/*Program to generate pythagorean triplets between 1 and 30*/
/*Author:Mugdha         Date:06-07-26*/

#include <stdio.h>

int main()
{
    int i,j,k;
    for(i=1;i<=30;i++)
    {
        for(j=i+1;j<=30;j++)
        {
            for(k=j+1;k<=30;k++)
            {
                if((i*i + j*j) == k*k)
                    printf("%d %d %d\n",i,j,k);

            }
        }
    }
    return 0;
}