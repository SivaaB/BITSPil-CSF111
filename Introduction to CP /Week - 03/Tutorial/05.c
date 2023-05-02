#include <stdio.h> 

int main (void)
{ 
    int number; 
    printf ("User Input (number only): "); 
    scanf ("%d", &number); 

    if (number % 2 == 0)
    { 
        printf ("Even\n"); 
    }
    else
    { 
        printf ("Odd\n"); 
    }
} 