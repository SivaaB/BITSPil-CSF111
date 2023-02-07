#include <stdio.h> 

int main (void)
{ 
    int m1, m2, m3, m4, m5;

    printf ("Student - 1, Marks: "); 
    scanf ("%d", &m1); 
    printf ("Student - 2, Marks: "); 
    scanf ("%d", &m2); 
    printf ("Student - 3, Marks: "); 
    scanf ("%d", &m3); 
    printf ("Student - 4, Marks: "); 
    scanf ("%d", &m4); 
    printf ("Student - 5, Marks: "); 
    scanf ("%d", &m5); 

    int average = m1 + m2 + m3 + m4 + m5 / 500; 
    printf ("%d\n", average); 

    int percentage = (m1 + m2 + m3 + m4 + m5 / 500)*100; 
    printf ("%d\n", percentage);
}