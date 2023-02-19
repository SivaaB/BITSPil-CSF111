#include <stdio.h>

int main (void)
{ 
    int a = 10; 
    int b = 20; 
    int temp = a; 
 
    a = b; 
    b = temp; 

    printf ("%d\n", a); 
    printf ("%d\n", b); 
}