/*To calculate the type of triangle*/
/*Author:Mugdha         Date: 03-07-26*/

#include <stdio.h>

int main()
{
    int s1,s2,s3,longest,sq=0,sum=0,prod=1;
    printf("Enter the sides of triangles s1,s2 and s3\n");
    scanf("%d\n%d\n%d",&s1,&s2,&s3);
    if (s1==s2 && s2==s3)
        printf("Equilateral\n");
    else if (s1!=s2 && s2!=s3 && s1!=s3)
        printf("Scalene\n");
    else if (s1==s2 || s2==s3 || s1==s3)
        printf("Isosceles\n");

    longest = (s1>s2?(s1>s3?s1:s3):(s2>s3?s2:s3));

    sum = s1 + s2 + s3 - longest;
    prod = (s1*s2*s3)/longest;

    sq = (sum*sum) - 2*prod;

    if(sq==longest*longest)
        printf("Right angled");
    return 0;
}