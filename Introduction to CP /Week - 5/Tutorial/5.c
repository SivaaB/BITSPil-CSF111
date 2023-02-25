#include <stdio.h> 

int main (void)

{ 
    float piVal = 0.0; 
    float sign = 1.0; 

    for (int den = 1; den <= 3; den+=2, sign *=-1.0)
    { 
        int term = 1.0/den; 
        piVal = piVal + (sign*term); 
    }

    piVal *= 4; 
    printf ("Pi-Value: %f\n", piVal); 
}