#include <stdio.h> 

int main (void)
{ 
    char chr; 
    printf ("User Input (char only): "); 
    scanf ("%c", &chr); 

    if ((chr >= 'A' && chr <= 'Z') || (chr >= 'a' && chr <= 'z'))
    { 
        printf ("Alphabet\n"); 
    }
    else
    { 
        printf ("Not an Alphabet\n"); 
    }

}