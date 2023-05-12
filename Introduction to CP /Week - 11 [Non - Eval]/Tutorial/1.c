#include <stdio.h>

int index = -1; 
int linear_search(int num, int size, int arr[])
{ 
    for (int i = 0; i < size; i++)
    { 
        if (num == arr[i])
        { 
            index = i; 
        } 
    } 
    return index; 
} 


int main()
{
    int num, size; 
    printf ("Enter number to search: "); 
    scanf ("%d", &num); 
    printf ("Enter size of array: "); 
    scanf ("%d", &size);
    
    int arr[size]; 
    printf ("Enter elements in the array: "); 
    for (int i = 0; i < size; i++)
    { 
        scanf ("%d", &arr[i]); 
    } 
    
    linear_search(num, size, arr); 
    
    if (index < 0)
    { 
        printf ("Element not found"); 
    } 
    else 
    { 
        printf ("Index : %d", index); 
    } 
    
}