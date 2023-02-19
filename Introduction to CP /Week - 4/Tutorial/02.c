#include <stdio.h> 

int main (void)
{ 
    int num; 
    int sum = 0; 

    printf ("Upper Limit: "); 
    scanf ("%d", &num); 

    int loop_num = num; 

    do 
    { 
        sum += loop_num; 
        loop_num--; 
    }
    while (loop_num!=0); 

    printf ("Sum of all natural numbers inclusive of upper limit %d is: %d\n", num, sum); 
}