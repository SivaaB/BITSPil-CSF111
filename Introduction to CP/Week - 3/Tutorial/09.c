#include <stdio.h> 

int main (void)
{ 
    int n1, n2; 
    
    printf ("Enter n1: "); 
    scanf ("%d", &n1); 
    printf ("Enter n2: "); 
    scanf ("%d", &n2); 

    int GCD = n1+n2; 

    while (1)
    { 
        if ((n1 % GCD == 0) && (n2 % GCD == 0)) 
        {
            printf("The GCD of %d and %d is %d\n", n1, n2, GCD);
            break;
        }
        GCD--;
    }
} 