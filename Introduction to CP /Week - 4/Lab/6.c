#include <stdio.h> 

int main (void)
{ 
    int n; 

    printf ("Enter Number of Elements in the Array: "); 
    scanf ("%d", &n); 

    int Arr[n]; 
    int sum = 0; 

    printf ("Enter %d Elements in Array: ", n); 
    for (int i = 0; i < n; i++ )
    { 
        scanf ("%d", &Arr[i]); 
        sum += Arr[i]; 
    }
    printf ("Sum of Elements in the given Array is: %d\n", sum); 
}