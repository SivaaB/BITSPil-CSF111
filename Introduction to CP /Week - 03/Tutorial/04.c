#include <stdio.h> 

int main (void)
{ 
    int number; 
    printf ("User Input (number only): "); 
    scanf ("%d", &number); 

    if (number > 0)
    { 
        printf ("Positive\n"); 
    }
    else
    { 
        printf ("Negative\n"); 
    }
} 