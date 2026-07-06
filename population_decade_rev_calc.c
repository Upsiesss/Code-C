/*Predicting the population of a town backwards when we are given current population where it increases steadily with a rate of 10%*/
/*Author:Mugdha         Date:06-07-26*/
#include <math.h>
#include <stdio.h>

int main()
{
    float pop=0,i=9;
    while(i>=0)
    {
        pop = 100000/pow(1.1,i);
        printf("Population of %.0fth year is approximately %0.f\n",(10-i),pop);
        //Rounding off the population variable to integer because we cannot have fractional population
        i--;
    }
    return 0;
}