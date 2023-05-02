#include <stdio.h> 

int main (void)
{ 
    int n1, n2, n3; 
    int max; 
    
    printf ("Enter n1: "); 
    scanf ("%d", &n1); 
    printf ("Enter n2: "); 
    scanf ("%d", &n2); 
    printf ("Enter n3: "); 
    scanf ("%d", &n3); 

    int array[] = {n1, n2, n3}; 
    max = array[n1]; 


    for (int i = 0; i < 4; i++)
    { 
        if (array[i] > max)
        { 
            max = array[i]; 
        }
    }

    printf ("Max: %d\n", max); 
} 