#include <stdio.h> 

int sum, digit; 

int sod(number)
{ 
    while (number > 0)
    { 
        digit = number % 10; 
        sum = sum + digit; 
        number = number / 10; 
    }
    return sum; 
}

int main()
{ 
    int number;  
    printf ("Enter number: "); 
    scanf ("%d", &number); 
    sum = sod(number); 
    printf ("Sum of Digits in %d : %d\n", number, sum); 
}