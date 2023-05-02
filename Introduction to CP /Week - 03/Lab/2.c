#include <stdio.h> 

int main (void)
{ 
    int n1; 
    int n2; 
    int op; 
    int value; 

    printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");

    printf ("Enter 1st number: "); 
    scanf ("%d", &n1); 
    printf ("Enter 2nd number: "); 
    scanf ("%d", &n2);
    printf ("Enter a choice: "); 
    scanf ("%d", &op); 

    switch (op)
    { 
        case 1 :
        { 
            value = n1 + n2; 
            printf ("%d", value); 
            break; 
        }
        case 2 :
        { 
            value = n1 - n2; 
            printf ("%d", value); 
            break; 
        }
        case 3 :
        { 
            value = n1 * n2; 
            printf ("%d", value); 
            break; 
        }
        case 4 :
        { 
            value = n1 / n2; 
            printf ("%d", value); 
            break; 
        }
        default: 
        { 
            printf ("Enter valid operand\n"); 
            break; 
        }
    }
}