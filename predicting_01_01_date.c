/*Finding out the day on 1st January of any year*/
/*Author:Mugdha         Date:23-06-26*/

#include <stdio.h>

int main()
{
    int yr, current_yr;
    int day_shift = 0; // 0 = Monday, 1 = Tuesday ... 6 = Sunday

    printf("Enter your year (2001 or later): ");
    scanf("%d", &yr);

    for(current_yr = 2001; current_yr < yr; current_yr++)
    {
        if((current_yr % 4 == 0 && current_yr % 100 != 0) || (current_yr % 400 == 0))
            day_shift += 2; // Leap year shifts calendar by 2 days
        else
            day_shift += 1; // Normal year shifts calendar by 1 day
    }

    // Wrap around the 7 days of the week
    day_shift = day_shift % 7;

    // Display the resulting day
    if(day_shift == 0) printf("Monday\n");
    if(day_shift == 1) printf("Tuesday\n");
    if(day_shift == 2) printf("Wednesday\n");
    if(day_shift == 3) printf("Thursday\n");
    if(day_shift == 4) printf("Friday\n");
    if(day_shift == 5) printf("Saturday\n");
    if(day_shift == 6) printf("Sunday\n");

    return 0;
}
