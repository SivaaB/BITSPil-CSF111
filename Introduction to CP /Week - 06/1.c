#include <stdio.h> 
int main (void)
{ 
    int number_of_employees; 
    printf ("Enter number of Employees: "); 
    scanf ("%d", &number_of_employees); 

    int arr_basic[number_of_employees]; 
    printf ("Enter basic salary: "); 
    for (int i = 0; i < number_of_employees; i++)
    { 
        scanf ("%d", &arr_basic[i]); 
    }

    int arr_total[number_of_employees]; 
    int HRA, special; 
    for (int i = 0; i < number_of_employees; i++)
    { 
        HRA = 0.4 * arr_basic[i]; 
        special = 0.25 * arr_basic[i]; 
        arr_total[i] = arr_basic[i] + HRA + special;
        printf ("\nTotal salary of employee : %d = %d\n", i+1, arr_total[i]);  
    }

    int max, temp; 
    max = arr_total[0]; 
    for (int i = 0; i < number_of_employees; i++)
    { 
        for (int j = i + 1; j < number_of_employees; j++)
        { 
            if (arr_total[j] > arr_total[i])
            { 
                temp = arr_total[i]; 
                arr_total [i] = arr_total[j]; 
                arr_total[j] = temp; 
            }
            
        }
        printf ("%d \t", arr_total[i]); 
    }
    
}