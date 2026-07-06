/*To calculate the colours*/
/*Author:Mugdha         Date: 03-07-26*/

#include <stdio.h>

int main()
{
    float R,G,B,r,g,b,W,C,M,Y,K;
    printf("Enter the values of R G B\n");
    scanf("%f %f %f",&R,&G,&B);
    r=R/255;
    g=G/255;
    b=B/255;
    W = (r>g?(r>b?r:b):(g>b?g:b));
    if(W==0)
    {
        C=0;
        M=0;
        Y=0;
        K=1;
    }
    else if(r!=0 && g!=0 && b!=0)
    {
        C=(W-r)/W;
        M=(W-g)/W;
        Y=(W-b)/W;
        K=1-W;
    }

    printf("White = %f\nCyan = %f\nMagenta = %f\nYellow = %f\nBlack = %f",W,C,M,Y,K);
    return 0;
}