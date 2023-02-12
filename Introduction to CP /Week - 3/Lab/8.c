#include <stdio.h> 

int main (void)
{ 
    int number; 
    int factorial = 1; 

    printf ("Enter Number: "); 
    scanf ("%d", &number); 

    for (int i = 1; i < number + 1; i++)
    { 
        factorial = factorial * i; 
    }
    printf ("Factorial : %d\n", factorial); 
}