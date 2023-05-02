#include <stdio.h> 

int main (void)
{ 
    int n1; 
    int digit = 1; 
    
    printf ("Enter n1: "); 
    scanf ("%d", &n1); 

    for (int i = 0; i < n1; i++)
    { 
        if (n1 / 10 != 0)
        { 
            digit++; 
            n1 = n1/10; 
        }
    }
    printf ("Digits: %d\n", digit); 
} 