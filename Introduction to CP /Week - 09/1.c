#include <stdio.h> 


int number, digit; 

int nod(int number)
{ 
    if (number <= 0)
    {
        return 0; 
    }
    else 
    { 
        digit++; 
        return nod(number/10); 
    }
}

int main()
{ 
    printf ("Enter number: "); 
    scanf ("%d", &number); 
    digit = 0; 
    nod(number); 
    printf ("Number of Digits in %d : %d\n", number, digit); 
}