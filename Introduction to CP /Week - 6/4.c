#include <stdio.h> 
int main() 
{
    int M, N; 
    printf ("Enter number of rows: "); 
    scanf ("%d", &M); 
    printf ("Enter number of columns: "); 
    scanf ("%d", &N); 

    int i, j, A[M][N], key;
    printf("\n Enter the %d elements in the matrix: ", M*N); 
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++) 
        {
            scanf("%d", &A[i][j]); 
        }
    }
    printf("\n The matrix is as follows: "); 

    for(i=0;i<M;i++)
    {
        printf("\n"); 
        for(j=0;j<N;j++) 
        {
            printf("%d \t", A[i][j]); 
        }
    }
    printf("\n");
    printf("\n Enter the key element: "); 
    scanf("%d", &key); 

    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++) 
        {
        if(key==A[i][j]) 
            {
                printf("\n It is in row %d, column %d.", i+1,j+1); 
            }
        }
    }

}