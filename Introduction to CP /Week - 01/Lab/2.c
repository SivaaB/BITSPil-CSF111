#include <stdio.h> 
int main ()
{ 
    float radius, perimeter, area; 
    printf ("Enter Radius: "); 
    scanf ("%f", &radius); 

    perimeter = 2 * 3.14 * radius; 
    area = 3.14 * radius * radius; 

    printf ("%f\n", perimeter); 
    printf ("%f\n", area); 
}