#include <stdio.h> 
int main ()
{ 
    int n, factorial; 
    printf ("Enter upper limit: "); 
    scanf ("%d", &n); 

    for (int i = 1; i <= n; i++)
    { 
        factorial = 1; 
        for (int j = 1; j <= i; j++)
        { 
            factorial = factorial * j; 
        }
        printf ("Factorial of %d : %d\n", i, factorial); 
    }
}