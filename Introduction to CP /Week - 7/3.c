#include <stdio.h>
int main()
{
    int row, column, block; 
    int sum = 0; 
    printf ("Enter row, column and block size: "); 
    scanf ("%d %d %d", &row, &column, &block); 

    int A[row][column][block]; 
    
    printf("Enter the %dx%dx%d elements of the matrix: ", row, column, block);

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            for(int k = 0; k < block; k++)
            {
                scanf("%d", &A[i][j][k]);
            }
        }
    }    
    
    printf("\n The sum is as follows: ");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            for(int k = 0; k < block; k++)
            {
                sum = sum + A[i][j][k];
            }
        }
    }
    printf("%d", sum);
}
