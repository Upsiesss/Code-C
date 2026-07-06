/*Program to exchange two numbers*/ 
/*Author:Mugdha Date:22-06-26*/ 
#include <stdio.h> 

int main() { 
    int a, b, temp = 0; 
    char ch; 
    
    printf("Enter a: "); 
    scanf("%d", &a); 
    
    printf("Enter b: "); 
    scanf("%d", &b); 
    
    printf("Choose method 1 or 2: "); 
    scanf(" %c", &ch); 
    
    if (ch == '1') { 
        // Without using another variable 
        a = a + b; 
        b = a - b; 
        a = a - b; 
        printf("a is %d\n", a); 
        printf("b is %d\n", b); 
    } 
    else if (ch == '2') { 
        // Using another temporary variable 
        temp = a; 
        a = b; 
        b = temp; 
        printf("a is %d\n", a); 
        printf("b is %d\n", b); 
    } 
    else {
        printf("Re-enter your choice\n"); 
    }
    
    return 0; 
}
