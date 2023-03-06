#include <stdio.h> 
int main()
{ 
    char input; 
    printf ("Enter character: "); 
    scanf ("%c", &input); 

    switch (input)
    { 
        case 'a': 
        case 'e': 
        case 'i': 
        case 'o':
        case 'u': 
        { 
            printf ("Vowel\n"); 
            break; 
        }

        case 'b': 
        case 'c':
        case 'd': 
        case 'f': 
        case 'g': 
        case 'h': 
        case 'j': 
        case 'k': 
        case 'l': 
        case 'm': 
        case 'n': 
        case 'p': 
        case 'q': 
        case 'r': 
        case 's': 
        case 't': 
        case 'v': 
        case 'w': 
        case 'x': 
        case 'y': 
        case 'z':
        { 
            printf ("Consonant\n"); 
            break; 
        }

        default: 
        { 
            printf ("Invalid Character\n"); 
        }
    } 
}
