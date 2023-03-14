// Sub-Div (a)

#include <stdio.h> 

int main (void)
{ 
    int height; 

    printf ("Height: "); 
    scanf ("%d", &height); 

    for (int i = 1; i < height + 1; i++ )
    { 
        for (int j = 0; j < i ; j++)
        { 
            printf("%d", i); 
        }
        printf ("\n"); 
    }
}

// Sub-Div (b)

#include <stdio.h> 

int main (void)
{ 
    int height; 

    printf ("Height: "); 
    scanf ("%d", &height); 

    for (int i = 1; i < height + 1; i++)
    { 
        for (int j = i; j >= 1 ; j--) // j = 1, the last number in row must be greater than or equal to 1. 
        { 
            printf("%d", j); 
        }
        printf ("\n"); 
    }
}