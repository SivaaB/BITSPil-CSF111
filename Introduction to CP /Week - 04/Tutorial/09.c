#include <stdio.h> 

int main (void)
{ 
    int num;

    printf ("Number: "); 
    scanf ("%d", &num);

    for (int i = 1; i < num + 1; i++)
    { 
        if (num % i == 0)
        { 
            printf ("%d ", i); 
        }
    }
} 