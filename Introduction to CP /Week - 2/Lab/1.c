#include <stdio.h> 

int main (void)
{ 
    char character; 

    printf ("Character: "); 
    scanf ("%c", &character); 

    int character_ascii = character; 

    printf ("%d\n", character_ascii); 
}