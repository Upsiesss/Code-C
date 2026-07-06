/*To find the multiplication table of a number upto a particular number*/
/*Author:Mugdha         Date:06-07-26*/

#include <stdio.h>

int main()
{
    int n,k,i;
    printf("Enter the number who's table you want\n");
    scanf("%d",&n);
    printf("Enter the number upto which table you want\n");
    scanf("%d",&k);
    for(i=1;i<k+1;i++)
    {
        printf("%d * %d = %d\n",n,i,(n*i));
    }
    return 0;
}