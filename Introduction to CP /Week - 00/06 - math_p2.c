#include <stdio.h>

int main()
{
    int x,n; 
    float term, sum, den = 1; 
    printf ("Enter value of x: "); 
    scanf ("%d", &x); 
    printf ("Enter number of terms: "); 
    scanf ("%d", &n); 
    
    float num = x; 
    float sign = 1; 
    
    for (int i = 2; i <= n; i++)
    {
        num=num*x*x; // power
        den=den*i*(i+1); // factorial
        sign = -1 * sign; 
        term= sign * (num/den);
        sum=sum+term;
    } 
    printf ("Sum = %f", sum); 
}