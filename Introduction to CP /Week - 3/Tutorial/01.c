#include <stdio.h> 

int main (void)
{ 
    char chr; 
    printf ("User Input (char only): "); 
    scanf ("%c", &chr); 

    if (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u' ) 
    {
        printf ("Vowel\n"); 
    }

    else
    { 
        printf ("Consonant\n"); 
    }
}