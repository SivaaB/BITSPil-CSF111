// (a)
#include <stdio.h> 

int q1 ()
{
    int N; 
    int cube;

    printf ("How many cubes: "); 
    scanf ("%d", &N); 

    for (int i = 0; i < N; i++)
    { 
        cube = i * i * i; 
        printf ("%d\n", cube); 
    }
}

// (b)
int q2 ()
{ 
    int N; 
    int multiplicative_val; 

    printf ("Enter the Multiplication Table number: "); 
    scanf ("%d", &N); 

    for (int i = 0; i <= 12; i++)
    { 
        multiplicative_val = N * i; 
        printf ("%d * %d = %d\n", N, i, multiplicative_val); 
    }
}