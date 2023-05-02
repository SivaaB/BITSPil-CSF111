#include <stdio.h> 

int main (void)
{ 
    int height; 

    printf ("Enter Height: "); 
    scanf ("%d", &height); 

    for (int i = 0; i <= height; i++)
    { 
        for (int j = 0; j <= i; j++)
        { 
            printf ("%d", j); 
        }
        printf ("\n"); 
    }

    for (int i = 0; i <= height; i++)
    { 
        for (int j = 0; j <= height - i - 1; j++)
        { 
            printf ("%d", j); 
        }
        printf ("\n"); 
    }

}