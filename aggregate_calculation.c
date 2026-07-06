/*Calculation of aggregate and percentage marks*/
/*Author:Mugdha    Date: 16-06-26*/

#include <stdio.h>
int main()
{
    float m1,m2,m3,m4,m5,total=0,per=0;
    printf("Enter your marks in 5 subjects: \n");
    scanf("%f \n%f \n%f \n%f \n%f",&m1,&m2,&m3,&m4,&m5);
    total = m1+m2+m3+m4+m5;
    per = total/5;
    printf("Aggregate = %f \n",total);
    printf("Percentage = %f",per);
    return 0;
}