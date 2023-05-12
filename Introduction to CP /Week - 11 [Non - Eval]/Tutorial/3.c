#include <stdio.h> 

int odd_element(int arr[], int n, int odd_array[], int odd_array_index)
{ 
    for (int i = 0; i < n ; i++)
    { 
        if (arr[i] % 2 != 0)
        {
            odd_array[odd_array_index] = arr[i]; 
            odd_array_index++; 
        }
    }
    return odd_array_index;
}

int even_element(int arr[], int n, int even_array[], int even_array_index)
{ 
    for (int i = 0; i < n ; i++)
    { 
        if (arr[i] % 2 == 0)
        { 
            even_array[even_array_index] = arr[i]; 
            even_array_index++; 
        }
    }
    return even_array_index;
}

int main()
{ 
    int arr[100], n; 
    int odd_array[100];
    int even_array[100]; 
    int odd_array_index = 0; 
    int even_array_index = 0; 

    printf("Enter the number of elements: "); 
    scanf("%d", &n); 

    printf("Enter the elements into the array: "); 
    for (int i = 0; i < n; i++)
    { 
        scanf("%d", &arr[i]); 
    }
    
    odd_array_index = odd_element(arr, n, odd_array, odd_array_index); 
    printf("Odd Element Array is : ");
    printf("\n"); 
    for (int i = 0; i < odd_array_index; i++)
    { 
        printf("%d\t", odd_array[i]); 
    }
    printf("\n"); 

    even_array_index = even_element(arr, n, even_array, even_array_index); 
    printf("Even Element Array is : ");
    printf("\n"); 
    for (int i = 0; i < even_array_index; i++)
    { 
        printf("%d\t", even_array[i]); 
    } 
    printf("\n"); 

    return 0;
}
