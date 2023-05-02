#include <stdio.h>

int main (void)
{ 
    int num; 
    int product; 

    printf ("Number: "); 
    scanf ("%d", &num); 

    for (int i = 1; i < 13; i++)
    { 
        product = num * i; 
        printf ("%d * %d = %d\n", num, i, product); 
    }
}