#include <stdio.h> 
int main()

{
    int M, N; 
    printf ("Enter number of rows: "); 
    scanf ("%d", &M); 
    printf ("Enter number of columns: "); 
    scanf ("%d", &N); 

    int A[M][N];
    int sum = 0;

    printf("\n Enter the %d elements in the matrix: ", M*N); 
    for(int i=0; i<M; i++)
    {
        for(int j=0; j<N; j++) 
            {
                scanf("%d", &A[i][j]); 
            }
    }

    printf("\n The matrix is as follows: "); 
    for(int i=0; i<M; i++)
    {
        printf("\n"); 
        for(int j=0;j<N;j++) 
        {
            printf(" %d \t", A[i][j]); 
        }
    }
    printf("\n"); 
    
    for(int i=0;i<M;i++) 
    {
        sum=0; 
        for(int j=0;j<N;j++)
        {
            sum=sum+A[i][j];
        }
        printf("\n Sum of row %d = %d \n", i+1, sum);
    }

    for(int j=0;j<N;j++) 
    {
        sum=0; 
        for(int i=0;i<M;i++) 
        {
            sum=sum+A[i][j]; 
        }
        printf("\n Sum of column %d = %d \n", j+1, sum);
    }
}