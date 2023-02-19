#include <stdio.h>  
void main()  
{  
    int height; 
    int i, j, k = 0;  
    printf ("Height: \n");  
    scanf ("%d", &height);   
      
    for (i =1; i <= height; i++)  
    {  
        for (j = 1; j <= height - i; j++)  
        {  
            printf ("  ");   
        }  
        for (k = 1; k <= ( 2 * i - 1); k++)  
        {  
            printf ("* ");
        }  
        printf ("\n");  
    }  
}  