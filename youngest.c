/* To find the youngest person */
/* Author: Mugdha Date: 22-06-26 */
#include <stdio.h>

int main() 
{
    int ram, shyam, ajay;

    printf("Enter ages for Ram, Shyam, and Ajay: \n");
    scanf("%d\n%d\n%d", &ram, &shyam, &ajay);
    int min_age = ram;

    if (shyam < min_age) 
        min_age = shyam;
    if (ajay < min_age) 
        min_age = ajay;  
    printf("Youngest: ");
    if (ram == min_age) 
        printf("Ram ");
    if (shyam == min_age) 
        printf("Shyam ");
    if (ajay == min_age) 
        printf("Ajay ");
    
    printf("(Age: %d)\n", min_age);

    return 0;
}
