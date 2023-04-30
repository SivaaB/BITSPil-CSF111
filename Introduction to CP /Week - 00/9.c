#include <stdio.h> 
#include <math.h> 
int main ()
{ 
    int n; 
    int i, j; 
    int sum = 0; 
    printf ("Enter number of bits: "); 
    scanf ("%d", &n); 

    int Arr[n]; 

    printf ("Enter %d bits: ", n);
    for (int i = 0; i < n; i++) 
    { 
        scanf("%d", &Arr[i]); 
    }

    for (int i = n - 1; i >= 0; i--)
    { 
        for ( int j = 0; j <= n - 1; j++)
        {
            sum = sum + (Arr[i] * pow (2, j)); 
        }
    }
    printf ("Decimal Equivalent = %d\n", sum); 
} 