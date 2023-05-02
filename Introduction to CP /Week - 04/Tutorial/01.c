#include <stdio.h> 

int main (void)
{ 
    int num; 

    printf ("Upper Limit: "); 
    scanf ("%d", &num); 

    while (num != 0)
    { 
        printf ("%d\n", num);
        num--; 
    }
}