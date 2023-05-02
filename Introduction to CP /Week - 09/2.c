#include <stdio.h> 

int sum, digit, n; 

int sod(int n)
{ 
    if (n <= 0)
    { 
        return 0; 
    }
    else 
    { 
        return((n % 10) + sod(n/10)); 
    }
}

int main()
{ 
    printf ("Enter number: "); 
    scanf ("%d", &n); 
    sum = sod(n); 
    printf ("Sum of Digits in %d : %d\n", n, sum); 
}