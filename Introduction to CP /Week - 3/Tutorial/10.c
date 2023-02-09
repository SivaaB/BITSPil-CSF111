#include <stdio.h> 

int main (void)
{ 
    int n1, n2; 
    
    printf ("Enter n1: "); 
    scanf ("%d", &n1); 
    printf ("Enter n2: "); 
    scanf ("%d", &n2); 

    if (n1 > n2)
    { 
        printf ("n1 is greater than n2\n"); 
    }
    else 
    { 
        printf ("n2 is greater than n1\n"); 
    }
} 