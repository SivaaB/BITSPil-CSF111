//(a)
#include <stdio.h>

int main (void)
{ 
    for (int i = 5; i > 0; i--)
    { 
        for (int j = 1; j <= i; j++) //
        { 
            printf ("%d", i); 
        } 
        printf ("\n"); 
    }
}


//(b)
#include <stdio.h> 

int main (void)
{ 
    for (int i = 7; i > 0; i--)
    { 
        for (int j = 1; j <= i; j++)
        { 
            printf("%d", i); 
        }
        printf ("\n"); 
    }
}