#include <stdio.h> 

int main (void)
{ 
    int number; 
    int remainder; 
    int reverse = 0; 

    printf ("Number: "); 
    scanf ("%d", &number); 

    for (int i = 0; i < number ; i++)
    { 
        remainder = number % 10; 
        reverse = (reverse * 10); 
        number = number / 10; 
    }

    if (reverse == number)
    { 
        printf ("It is a palindrome\n"); 
    }
    else 
    { 
        printf ("It is not a palindrome\n"); 
    }
}