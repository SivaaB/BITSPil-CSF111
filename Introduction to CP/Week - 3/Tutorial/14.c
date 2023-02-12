#include <stdio.h> 

int main (void)
{ 
    int n; 
    int remainder; 
    int reverse = 0; 
    
    printf ("Enter n: "); 
    scanf ("%d", &n); 

    while (n != 0)
    { 
        remainder = n % 10; 
        reverse = (reverse * 10) + remainder; 
        n /= 10; 
    }

    printf ("Reversed Number: %d\n", reverse); 
} 