#include <stdio.h> 
int main ()
{ 
    int n; 
    int i; 
    int Arr[32] = {0}; 
    printf ("Enter number: "); 
    scanf ("%d", &n); 

    while (n != 0)
    { 
        Arr[i] = n % 2; // For Octadecimal - 8; For Hexadecimal - 16
        n = n / 2;  // For Octadecimal - 8; For Hexadecimal - 16
        i++; 
    }

    printf ("The binary equivalent is: "); 
    for (int j = i-1; j >= 0; j--)
    { 
        printf ("%d", Arr[j]); 
    }
    printf ("\n"); 
}