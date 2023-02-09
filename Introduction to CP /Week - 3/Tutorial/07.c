#include <stdio.h> 

int main (void)
{ 
    float radius; 
    float pi = 3.14; 
    float area; 
    printf ("Radius: "); 
    scanf ("%f", &radius); 

    area = pi * radius * radius; 
    printf ("%f\n", area); 
} 