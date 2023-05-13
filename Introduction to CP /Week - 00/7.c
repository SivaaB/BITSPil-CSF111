#include <stdio.h> 

int main()
{
    int n, min,temp;
    printf("Enter the number of elements");
    scanf("%d", &n);

    int A[n];
    printf("Enter %d elements", n);
    for(int i = 0;i < n; i++)
    {
        scanf("%d",&A[i]);
    }

    for(int i = 0; i < n; i++)
    {
        min= A[0];
        for(int j = i + 1; j < n; j++)
        {
            if(A[min]>A[j]) 
            {
                min = j;
            }
        }
        temp=A[i];
        A[i]=A[min];
        A[min]=temp;
    }
    
    for(int i = 0; i < n; i++) 
    { 
        printf("%d",A[i]);
    } 
}