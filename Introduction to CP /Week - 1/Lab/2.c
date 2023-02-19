#include <stdio.h>

int main (void)
{ 
    float Radius; 
    float Pi = 3.14; 

    printf ("Radius: "); 
    scanf ("%f", &Radius); 

    float perimeter = 2.0 * Pi * Radius; 
    printf ("Perimeter %f\n", perimeter); 
    float area = Pi * Radius * Radius; 
    printf ("Area %f\n", area); 
}