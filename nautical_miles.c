/*Calculating distance between two points on the earth in nautical miles*/
/*Author: Mugdha        Date:21-06-26*/

#include <stdio.h>
#include <math.h>

int main()
{
    float G1,G2,L1,L2,L1_rad=0,L2_rad=0,del_G=0,D=0;
    printf("Enter the Latitude and Longitude of first place: \n");
    scanf("%f\n%f",&L1,&G1);
    L1_rad = L1*3.14159/180;
    printf("Enter the Latitude and Longitude of second place: \n");
    scanf("%f\n%f",&L2,&G2);
    L2_rad = L2*3.14159/180;
    del_G = (G2-G1)*3.14159/180;
    D = 3440.065 * acos((sin(L1_rad) * sin(L2_rad))+ (cos(L1_rad)*cos(L2_rad)*cos(del_G)));
    printf("The distance in nautical miles between the two places is %f",D);
    return 0;
}