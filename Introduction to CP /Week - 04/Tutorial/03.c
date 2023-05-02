#include <stdio.h> 

int main (void)
{ 
    int num;
    int fact = 1;  

    printf ("Number: "); 
    scanf ("%d", &num); 

    for (int i = num; i > 0; i--)
    { 
        fact *= i; 
    }
    printf ("Factorial is: %d\n", fact); 
}