#include <stdio.h> 

float sum(float arr[], float noe);
float noe = 0;

int main ()
{ 
    float arr[100], result; 

    printf ("Enter number of Elements in the Array: "); 
    scanf ("%f", &noe); 

    printf ("Enter the elements in the array: "); 
    for (int i = 0; i < noe; i++)
    { 
        scanf("%f", &arr[i]); 
    }

    result = sum(arr, noe); 
    printf ("Result = %f", result); 
}

float sum(float arr[], float noe)
{ 
    static float sum = 0.0; 
    for (int i = 0; i < noe; i++)
    { 
        sum = sum + arr[i]; 
    }
    return sum; 
}