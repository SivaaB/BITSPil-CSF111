#include <stdio.h> 

int main (void)
{ 
    int num;  
    int nod; 
    int sum = 0; 
    int remainder; 

    printf ("Number: "); 
    scanf ("%d", &num);
    printf ("Number of Digits: "); 
    scanf ("%d", &nod);
    
    for (int i = 0; i < nod; i++)
    { 
        remainder = num % 10; 
        sum += remainder; 
        num /= 10;
    }
    printf ("Sum: %d\n", sum); 
}