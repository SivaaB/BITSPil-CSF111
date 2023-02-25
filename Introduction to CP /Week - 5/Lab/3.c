#include <stdio.h> 

int main (void)
{ 
    float salary; 
    float HRA, Special_Allowance; 
    float total_salary; 

    int n; 

    printf ("Number of Employees: "); 
    scanf ("%d", &n); 

    int arr[n]; 

    for(int i = 0; i < n; i++)
    { 
        printf ("Base Salary: "); 
        scanf ("%f", &salary); 

        HRA = 0.4 * salary; 
        Special_Allowance = 0.25 * salary; 
        total_salary = salary + HRA + Special_Allowance; 

        printf ("Total Salary: %f\n", total_salary); 
        arr[i] = total_salary; 
        printf ("-xxxxxxxxxxxxxxx-\n");
    }

    for (int i = 0; i < n; i++)
    { 
        for (int j = i + 1; j < n; j++)
        { 
            if (arr [i] < arr[j])
            { 
                int temp = arr[i]; 
                arr[i] = arr [j]; 
                arr[j] = temp; 
            }
        } 
    }

    for (int i = 0; i < n; i++)
    { 
        printf ("%d\n", arr[i]); 
    }
}