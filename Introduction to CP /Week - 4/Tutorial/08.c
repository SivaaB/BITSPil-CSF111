#include <stdio.h> 

int main (void)
{ 
    int num; 
    int flag = 0; 

    printf ("Number: "); 
    scanf ("%d", &num);

    for (int i = 1; i < num + 1; i++)
    { 
        if (num % i == 0)
        { 
            flag = 1; 
        }
    }

    if (flag = 0)
    { 
        printf ("Not a Prime Number\n"); 
    }
    if (flag = 1)
    { 
        printf ("Prime Number\n"); 
    }
}