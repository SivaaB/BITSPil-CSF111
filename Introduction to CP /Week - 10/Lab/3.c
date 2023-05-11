#include <stdio.h> 

int sortArr(int arr[], int noe); 
int temp; 

int main() 
{ 
    int arr[100]; 
    int noe; 

    printf ("Enter number of elements: "); 
    scanf ("%d", &noe); 

    printf ("Enter elements in Arrays: ");  
    for (int i = 0; i < noe; i++)
    {
        scanf ("%d", &arr[i]); 
    } 

    sortArr(arr, noe); 

    printf ("Sorted Array is: "); 
    for (int i = 0; i < noe; i++)
    { 
        printf ("%d", arr[i]); 
    }
}

int sortArr(int arr[], int noe)
{ 
    int min_index; 
    min_index = arr[0]; 

    for (int i = 0; i < noe; i++)
    { 
        for (int j = i + 1; j < noe; j++)
        {
            if (arr[i] > arr[j])
            { 
                temp = arr[i]; 
                arr[i] = arr[j]; 
                arr[j] = temp; 
            }
        } 
    }
} 
