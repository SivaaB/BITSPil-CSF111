#include <stdio.h>

int main()
{
    int ll, ul, factorial; 
    int sum = 0; 
    printf ("Enter lower limit: "); 
    scanf ("%d", &ll); 
    printf ("Enter upper limit: "); 
    scanf ("%d", &ul); 
    
    for (int i = ll; i <= ul; i++)
    {
        factorial = 1;
        for (int j = i; j > 0; j--)
        { 
            factorial = factorial * j; 
        } 
        printf ("Factorial of %d is %d \n", i, factorial); 
    } 
}