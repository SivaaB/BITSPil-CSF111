#include <stdio.h> 

int main (void)
{ 
    float basic; 
    float allowance; 

    printf ("Basic: "); 
    scanf ("%f", &basic); 
    printf ("Allowance: "); 
    scanf ("%f", &allowance); 

    float HRA = (40 * basic/100); 

    printf ("Basic : %f ; HRA = %f ; Allowance = %f \n", basic, HRA, allowance); 

}