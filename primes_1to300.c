/*To find all primes from 1 to 300*/
/*Author:Mugdha Date:06-07-26*/

#include <stdio.h>
int main()
{
    int i=1; 
    printf("PRIMES BETWEEN 1 and 300\n");
    while(i<301)
    {   
        int n=2; // To reset the value of the divisor every iteration 
        while(n<=i)
        {
            if (i%n==0)
                break;
            n++;
        }
        if(n==i)
            printf("%d\n",i);
        i++;
    }
    return 0;
}