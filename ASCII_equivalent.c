/*To type character and ASCII value*/
/*Author:Mugdha         Date: 03-07-26*/

#include <stdio.h>

int main()
{
    int x=0;
    while(x<=255)
    {
        printf("%c      %d\n",x,x);
        x++;
    }
    return 0;

}