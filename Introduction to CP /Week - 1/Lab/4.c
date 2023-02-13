#include <stdio.h> 

int main (void)
{ 
    int number; 
    int remainder; 
    int sum = 0; 

    printf ("Enter a 4-digit number: "); 
    scanf ("%d", &number); 

    for (int i = 0; i < 4; i++)
    { 
        // First Iteration for 1234 is 4 and i = 0
        // Second Iteration for 123 is 3 and i = 1 
        // Third Iteration for 12 is 2 and i = 2 
        // Fourth Iteration for 1 ia 1 and i = 3

        remainder = number % 10; 
        sum += remainder; 
        number/=10; 
    }

    printf ("Sum of Digits : %d\n", sum);  
}