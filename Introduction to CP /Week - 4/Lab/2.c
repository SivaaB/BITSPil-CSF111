#include <stdio.h> 

int main (void)
{ 
    int nos; 
    int nosj;
    float avg = 0.0; 

    printf ("Number of Students: "); 
    scanf ("%d", &nos); 
    printf ("Number of Subjects: "); 
    scanf ("%d", &nosj); 

    float sum = 0.0; 
    int a[nosj]; 

    for (int i = 0; i < nos; i++)
    {
        printf ("Student - %d\n", (i+1)); 
        printf ("Enter marks in %d subjects: ", nosj); 
        for (int j = 0; j < nosj; j++)
        { 
            scanf ("%d", &a[j]); 
            sum = sum + a[j]; 
        }
        avg = sum/nosj; 
        printf ("Average : %f\n", avg); 
        float avg = 0.0; 
        sum = 0; 
    }
}