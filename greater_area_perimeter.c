/*To find which is greater area or perimeter*/
/*Author:Mugdha         Date:22-06-26*/

#include <stdio.h>
int main()
{
    float l,b,area=0,per=0;
    while (1)
    {
        printf("Enter the length and breadth of the rectangle: \n");
        scanf("%f\n%f",&l,&b);
        area = l * b;
        per = 2 * (l + b);
        if((l>0) && (b>0))
        {
            if(area == per)
                printf("Area and perimeter are equal and are %f",area);
            else
            {
                if(area > per)
                    printf("Area is greater and is %f",area);
                else
                    printf("Perimeter is greater and is %f",per);
            }
            break;
        }
    }
    return 0;
}