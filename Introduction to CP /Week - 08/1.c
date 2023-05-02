#include <stdio.h> 

void color (char col)
{ 
    switch (col)
    { 
        case 'V': 
        {
            printf ("Violet\n"); 
            break; 
        }
        case 'I': 
        { 
            printf ("Indigo"); 
            break; 
        }
        case 'B': 
        { 
            printf ("Blue"); 
            break; 
        }
        case 'G': 
        { 
            printf ("Green"); 
            break; 
        }
        case 'Y': 
        { 
            printf ("Yellow"); 
            break; 
        }
        case 'O': 
        { 
            printf ("Orange"); 
            break; 
        }
        case 'R': 
        { 
            printf ("Red"); 
            break; 
        }
        default: 
        { 
            printf ("Color is not present! "); 
        }
    }
}

int main (void)
{ 
    char col; 
    printf ("Enter a Color (Upper-Case only):- "); 
    scanf ("%c", &col); 

    color(col); 
}