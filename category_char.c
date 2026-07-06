/*To check what category an entered character falls into*/
/*Author:Mugdha         Date:28-06-26*/

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter your character\n");
    scanf("%c",&ch);
    if((ch>=65)&&(ch<=90))
    {
        printf("Uppercase");
    }
    else if((ch>=97)&&(ch<=122))
    {
        printf("Lowercase");
    }
    else if((ch>=48)&&(ch<=57))
    {
        printf("Number");
    }
    else if((ch>=0)&&(ch<=127))
    {
        printf("Special character");
    }
    else
        printf("Please re-enter");
    return 0;
}