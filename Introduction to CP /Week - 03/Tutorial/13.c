#include <stdio.h> 

int main (void)
{ 
    int n; 
    int remainder; 
    int sum = 0; 
    
    printf ("Enter n: "); 
    scanf ("%d", &n); 

    for (int i = 0; i < n; i++)
    { 
        remainder = n % 10; 
        sum += remainder; 
        n = n / 10; 
    }

    printf ("Sum: %d\n", sum); 
} 