/*To calculate the grade of steel*/
/*Author:Mugdha         Date: 03-07-26*/

#include <stdio.h>

int main()
{
    float hardness,cc,ts;
    printf("Enter the hardness and carbon content and tensile strength of the steel\n");
    scanf("%f\n%f\n%f",&hardness,&cc,&ts);
    if(hardness>50 && cc<0.7 && ts>5600)
        printf("Grade 10");
    else if(hardness>50 && cc<0.7)
        printf("Grade 9");
    else if(cc>0.77 && ts>5600)
        printf("Grade 8");
    else if(hardness>50 && ts>5600)
        printf("Grade 7");
    else if(hardness>50 || cc<0.7 || ts>5600 )
        printf("Grade 6");
    else
        printf("Grade 5");
    
    return 0;
}