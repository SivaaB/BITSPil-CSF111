#include <stdio.h> 

int min, max; 

int min_element (int arr[], int n)
{ 
    min = arr[0]; 
    for (int i = 0; i < n ; i++)
    { 
        if (arr[i] < min)
        { 
            min = arr[i]; 
        }
    }
    return min; 
}

int max_element (int arr[], int n)
{ 
    max = arr[0]; 
    for (int i = 0; i < n ; i++)
    { 
        if (arr[i] > max)
        { 
            max = arr[i]; 
        }
    }
    return max; 
}

int main ()
{ 
    int arr[100], n; 
    printf ("Enter the number of elements: "); 
    scanf ("%d", &n); 

    printf ("Enter the elements into the array: "); 
    for (int i = 0; i < n; i++)
    { 
        scanf ("%d", &arr[i]); 
    }
    
    min_element (arr, n); 
    printf ("Minimum Element is : %d\n", min); 
    max_element (arr, n); 
    printf ("Maximum Element is : %d\n", max); 
}