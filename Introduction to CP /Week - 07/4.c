#include <stdio.h> 
int main ()
{
    int row, ncr, n, r, space; 
    printf ("Rows: "); 
    scanf ("%d", &row); 

    for (n = 0; n < row; n++)
    {
        for (space = 1; space < row - n; space++) // we want it to print spaces till row - n, and then eventually print the number
        { 
            printf (" "); 
        }

        for (r = 0; r <= n; r++)
        { 
            if (n == 0 || r == 0) // first element in pascal triangle is always bound to be 0
            { 
                ncr = 1; 
                printf ("%d ", ncr); 
            }

            else 
            { 
                ncr = ncr * (n-r+1)/r; // ncr * (n - r - 1) / r
                printf ("%d ", ncr); 
            }
        }
        printf ("\n"); 
    }
}


// PS : I hate this pattern. :(
