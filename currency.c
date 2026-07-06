/*Currency system*/
/*Author:Mugdha         Date:17-06-26*/

#include <stdio.h>

int main()
{
    int n_100,n_50,n_10,n_5,n_2,n_1,N,notes=0;
    printf("Enter your amount: ");
    scanf("%d",&N);
    n_100 = N/100;
    N = N%100;
    n_50 = N/50;
    N = N%50;
    n_10 = N/10;
    N = N%10;
    n_5 = N/5;
    N = N%5;
    n_2 = N/2;
    N = N%2;
    n_1 = N/1;
    N = N%1;
    notes = n_100+n_50+n_10+n_5+n_2+n_1;
    printf("Minimum number of notes is %d",notes);
    return 0;
}