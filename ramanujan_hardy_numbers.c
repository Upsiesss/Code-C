/*To calculate a finite number of Ramanujan Hardy numbers*/
/*Author:Mugdha             Date:06-07-26*/

#include <stdio.h>
#include <math.h>
int main()
{
    float i,j,m,n,sum1,sum2;

    for (i=1;i<=20;i++)
    {
        for(j=i+1;j<=20;j++)
        {
            sum1 = pow(i,3.0) + pow(j,3.0);
            for(m=i+1;m<=20;m++)
            {
                for(n=m+1;n<=20;n++)
                {
                    sum2 = pow(m,3.0) + pow(n,3.0);
                    if((sum1 == sum2) && (i!=m && i!=n && j!=m && j!=n ))   
                        printf("%.0f is ramanujan number.\n",sum1);                     
                       
                        
                }
            }
        }
    }

    return 0;
}