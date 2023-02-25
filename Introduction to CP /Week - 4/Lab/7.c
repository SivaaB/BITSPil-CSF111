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
    } 

    int min = Arr[0]; 
    int max = Arr[0];

    for (int j = 0; j < n; j++)
    { 

        if (Arr[j] > max)
        { 
            max = Arr[j]; 
        }

        if (Arr[j] < min)
        { 
            min = Arr[j]; 
        }
    }
    printf ("Max element in Array is: %d\n", max);
    printf ("Min element in Array is: %d\n", min);
}

