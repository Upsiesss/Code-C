/*To calculate the BMI*/
/*Author:Mugdha         Date: 03-07-26*/

#include <stdio.h>

int main()
{
    float BMI=0,wt,h;
    printf("Enter your weight in kg\n");
    scanf("%f",&wt);
    printf("Enter your height in m\n");
    scanf("%f",&h);
    BMI = wt/(h*h);

    if(BMI<15)
        printf("Starvation");
    else if(BMI<=17.5)
        printf("Anorexic");
    else if(BMI<=18.5)
        printf("Underweight");
    else if(BMI<=24.9)
        printf("Ideal");
    else if(BMI<=25.9)
        printf("Overweight");
    else if(BMI<=30.9)
        printf("Obese");
    else
        printf("Morbidly Obese");
    return 0;
}