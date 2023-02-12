#include <stdio.h>

int main (void)
{ 
    int number; 
    int rev = 0; 
    int sod = 0;
    int remainder; 
    int nod; 

    printf ("Number: "); 
    scanf ("%d", &number); 

    do
    { 
        remainder = number % 10; 
        sod = sod + remainder; 
        number = number / 10; 
    }
    while (number != 0); 
    printf ("SOD: %d\n", sod); 

    int temp = sod; 

    do
    { 
        rev = rev * 10 + temp % 10;  
        temp = temp / 10;  
    }
    while (temp > 0); 
    printf ("Reverse of SOD: %d\n", rev); 

    int multiply = temp * sod; 

    if (multiply == number)
    { 
        printf ("Magic Number\n"); 
    }
    else 
    { 
        printf ("Not a magic number\n"); 
    }
}