#include <stdio.h> 

int main (void)
{ 
    int array_A[3][3]; 
    int array_B[3][3]; 
    int sum [3][3]; 
    int subtraction[3][3]; 
    int i; 
    int j; 

    printf ("\nElements of first matrix: \n"); 
    for (i = 0; i < 3; i++) 
    { 
        for (j = 0; j < 3; j++)
        { 
            printf ("Enter Element for [%d] [%d] location.\n", i + 1, j+1); 
            scanf ("%d", &array_A[i][j]); 
        }
    }

    printf ("\nElements of second matrix: \n\n");    
    for (i = 0; i < 3; i++) 
    { 
        for (j = 0; j < 3; j++)
        { 
            printf ("Enter Element for [%d] [%d] location.\n", i+1, j+1); 
            scanf ("%d", &array_B[i][j]); 
        }
    }

    int choice;

    printf ("\n\n1. Addition\n2. Subtraction\n"); 
    scanf ("%d", &choice); 
    if (choice == 1)
    { 
        for (int i = 0; i < 3; i++)
        { 
            for (int j = 0; j < 3; j++)
            { 
                sum [i][j] = array_A[i][j] + array_B[i][j]; 
            }
        }

        printf ("Sum: \n"); 
        for (int i = 0; i < 3; i++)
        { 
            for (int j = 0; j < 3; j++)
            { 
                printf ("%d  ", sum[i][j]); 
            }
            printf ("\n"); 
        }
    } 
    else if (choice == 2)
    { 
        for (int i = 0; i < 3; i++)
        { 
            for (int j = 0; j < 3; j++)
            { 
                subtraction[i][j] = array_A[i][j] - array_B[i][j]; 
            }
            printf ("\n"); 
        }

        printf ("Subtraction: \n"); 
        for (int i = 0; i < 3; i++)
        { 
            for (int j = 0; j < 3; j++)
            { 
                printf ("%d  ", subtraction[i][j]); 
            }
        }
    }
} 
