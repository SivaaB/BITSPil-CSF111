#include <stdio.h> 

int main (void)
{ 
    int a = 5; 
    int b = 10; 
    b = b - a; // b = 5
    a = a + b; 

    printf ("%d\n", a); 
    printf ("%d\n", b); 
} 