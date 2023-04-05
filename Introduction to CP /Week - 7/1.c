#include <stdio.h> 
int main() 
{
    int rows, columns, i, j;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &columns);
    
    int matrix[rows][columns]; 

    if (rows != columns) 
    {
        printf("Invalid matrix."); 
    }

    else
    { 
        printf ("Enter Elements in Matrix: "); 
        for (int i = 0; i < rows; i++)
        { 
            for (int j = 0; j < columns; j++)
            { 
                scanf ("%d", &matrix[i][j]); 
            }
        }

        printf ("Upper Diagonal Elements are: \n"); 
        for (int i = 0; i < rows; i++)
        { 
            for (int j = 0; j < columns; j++)
            { 
                if ( i < j || i == j)
                { 
                    printf ("%d\t", matrix[i][j]); 
                }
                else 
                { 
                    printf ("\t"); 
                }
            }
            printf ("\n"); 
        }
    }
}