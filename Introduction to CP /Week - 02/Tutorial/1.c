#include <stdio.h> 

int main (void)
{ 
    char color; 

    printf (" Enter a letter: \n\n 1. R --> Red\n 2. G --> Green\n 3. B --> Blue\n 4. Default --> Black\n Case Insensitive\n");
    scanf ("%c", &color);


    switch (color)
    { 
        case 'R': 
        case 'r':
        { 
            printf ("Red\n"); 
            break; 
        }
        case 'G': 
        case 'g': 
        { 
            printf ("Green\n"); 
            break; 
        }
        case 'B': 
        case 'b':
        { 
            printf ("Blue\n"); 
            break; 
        }
        default: 
        { 
            printf ("Black\n"); 
            break; 
        }
    } 
}