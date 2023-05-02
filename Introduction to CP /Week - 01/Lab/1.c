#include <stdio.h> 

int main (void)
{ 
    float m1, m2, m3, m4, m5;
    float total, average, percentage; 

    printf ("Student - 1, Marks: "); 
    scanf ("%f", &m1); 
    printf ("Student - 2, Marks: "); 
    scanf ("%f", &m2); 
    printf ("Student - 3, Marks: "); 
    scanf ("%f", &m3); 
    printf ("Student - 4, Marks: "); 
    scanf ("%f", &m4); 
    printf ("Student - 5, Marks: "); 
    scanf ("%f", &m5); 

    total = m1 + m2 + m3 + m4 + m5; 
    average = total/5;
    printf ("%f\n", average); 

    percentage = average; 
    printf ("%f%%\n", percentage);
}
