#include <stdio.h> 

int main (void)
{ 
    int num; 
    int pow; 
    int powered = 1; 

    printf ("Number: "); 
    scanf ("%d", &num); 
    printf ("Power: "); 
    scanf ("%d", &pow); 

    int loop_pow = pow; 

    while (loop_pow != 0)
    { 
        powered *= num; 
        loop_pow--; 
    }

    printf ("%d to the Power %d is: %d\n", num, pow, powered);
}