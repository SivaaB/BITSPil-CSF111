#include <stdio.h>
int main()
{
    int x,n; 
    float den = 1; 
    printf ("Enter value of x: "); 
    scanf ("%d", &x); 
    printf ("Enter number of terms: "); 
    scanf ("%d", &n); 
    
    float num = x; 
    float term = x / den; 
    float sum = sum + term; 
    
    for (int i = 2; i <= n; i++)
    {
        num=num*x; // power
        den=den*i; // factorial
        term=num/den;
        sum=sum+term;
    } 
    printf ("Sum = %f", sum); 
}