#include <stdio.h> 

void bin (int num)
{ 
    int Arr[32]; 
    int i = 0, j = 0; 

    while(num > 0)
    { 
        Arr[i] = num % 2;
        num = num / 2; 
        i++;
    }
    
    printf ("The binary equivalent is: "); 
    for (j = (i-1) ; j >= 0; j--)
    { 
        printf ("%d", Arr[j]); 
    }

}

int main ()
{ 
    int num; 
    printf ("Enter decimal number: "); 
    scanf ("%d", &num); 

    bin (num); 
}