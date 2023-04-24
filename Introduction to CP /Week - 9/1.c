#include <stdio.h> 

int nod(number)
{ 
    int count = 0; 
    while (number > 0)
    { 
        number = number / 10; 
        count++; 
    }
    return count; 
}

int main()
{ 
    int number, digit; 
    printf ("Enter number: "); 
    scanf ("%d", &number); 
    digit = nod(number); 
    printf ("Number of Digits in %d : %d\n", number, digit); 
}