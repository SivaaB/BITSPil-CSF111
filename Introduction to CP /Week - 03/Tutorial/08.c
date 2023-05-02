#include <stdio.h> 

int main (void)
{ 
    int n1, n2; 
    int LCM = 2; 
    
    printf ("Enter n1: "); 
    scanf ("%d", &n1); 
    printf ("Enter n2: "); 
    scanf ("%d", &n2); 

    while (1)
    { 
        if ((n1 % LCM == 0) && (n2 % LCM == 0)) 
        {
            printf("The LCM of %d and %d is %d\n", n1, n2, LCM);
            break;
        }
        LCM++;
    }
} 