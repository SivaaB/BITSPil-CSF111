#include <stdio.h> 

int main (void)
{ 
    int age; 

    printf ("Enter Age (numeric): "); 
    scanf ("%d", &age); 

    if (age > 18)
    { 
        printf ("Major\n"); 
    }
    else
    { 
        printf ("Minor\n"); 
    }
}