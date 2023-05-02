#include <stdio.h> 

int main (void)
{ 
    for (int i = 0; i < 4; i++)
    { 
        for (int j = 0; j <= i; j++)
        { 
            printf ("*"); 
        }
        printf ("\n"); 
    }
    printf ("\n"); 
}