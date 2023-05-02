#include <stdio.h> 

int main (void)
{ 
    char chr; 
    printf ("User Input (char only): "); 
    scanf ("%c", &chr); 

    int ascii = chr; 
    printf ("Ascii value is: %d\n", ascii); 
} 