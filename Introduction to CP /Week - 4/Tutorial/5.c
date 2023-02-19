#include <stdio.h> 

int main (void)
{ 
    int num;  
    int nod; 
    int digit; 

    printf ("Number: "); 
    scanf ("%d", &num);
    printf ("Number of Digits: "); 
    scanf ("%d", &nod);

    printf ("Digits are: \n"); 
    for (int i = 0; i < nod; i++)
    { 
        digit = num % 10; 
        printf ("%d ", digit); 
        num /= 10;
    }
    printf ("\n"); 
}