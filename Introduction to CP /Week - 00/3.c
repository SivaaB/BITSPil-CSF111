#include <stdio.h>

int main()
{
    int ll, ul, power;
    int sum = 0; 
    printf ("Enter lower limit: "); 
    scanf ("%d", &ll); 
    printf ("Enter upper limit: "); 
    scanf ("%d", &ul); 
    
    for (int i = ll; i <= ul; i++)
    { 
        power = 1; 
        power = i * i; 
        printf ("Power of %d is %d\n", i, power); 
    } 
}