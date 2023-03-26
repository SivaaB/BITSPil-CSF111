#include <stdio.h>
int main() 
{

    int M, N; 
    printf ("Enter number of rows: "); 
    scanf ("%d", &M); 
    printf ("Enter number of columns: "); 
    scanf ("%d", &N); 


    int i, j, A[M][N], sum;

    if (M==N) 
    {
        printf("\n Enter the %d elements of the square matrix: ", M*N); 
        for(i=0;i<M;i++)
        {
            for(j=0;j<N;j++) 
            {
            scanf("%d", &A[i][j]); 
            }
        }   
  
        for(i=0;i<M;i++) 
        {
            printf("\n"); 
            for(j=0;j<N;j++) 
            {
                printf("%d \t", A[i][j]); 
            }
        }
        printf("\n");
        printf("\n Sum of the main diagonal = "); 

        sum=0;
        for(i=0;i<M;i++)
        {
            for(j=0;j<N;j++) 
                {
                    if (i==j)
                    sum=sum+A[i][j]; 
                }
        }
        printf("%d", sum);
        printf("\n");

        printf("\n Sum of the opposite diagonal = "); sum=0;
        for(i=0;i<M;i++)
        {
            for(j=0;j<N;j++) 
                {
                    if (i+j==M-1)
                        sum=sum+A[i][j]; 
                }
        }
        printf("%d", sum); 
    }

    else
    {
        printf("\n Invalid Square Matrix.");
    }
}