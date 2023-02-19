#include <stdio.h> 

int main (void)
{ 
    int num; 
    int sum = 0; 

    printf ("Upper Limit: "); 
    scanf ("%d", &num); 

    for (int i = 1; i < num + 1; i++)
    { 
        if (i % 2 != 0)
        { 
            printf("%d ", i); 
            sum += i; 
        }
    }
    printf ("\n"); 
    printf ("Sum: %d\n", sum); 
}