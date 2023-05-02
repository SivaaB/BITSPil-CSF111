#include <stdio.h> 
int main ()
{ 
    int num, flag; 
    printf ("Enter number: "); 
    scanf ("%d", &num); 

    for (int i = 2; i < num; i++) 
    { 
        if (num%i == 0)
        { 
            flag = 0; 
            break; 
        }

        else
        { 
            flag = 1; 
        }
    }

    if (flag == 0)
    { 
        printf ("Not Prime"); 
    }
    else if (flag == 1)
    { 
        printf ("Prime"); 
    }
    
}
