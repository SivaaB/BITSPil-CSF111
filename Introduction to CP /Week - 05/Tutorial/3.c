#include <stdio.h> 

int main (void)
{ 
    int nDays = 0, nDaysHot = 0, nDaysPleasant = 0, nDaysCold = 0; 
    char ch; 
    float temp; 

    do 
    { 
        printf ("Do you want to continue [Y/N]: "); 
        scanf ("%c", &ch); 
        if (ch == 'n' || ch == 'N')
        { 
            break; 
        }

        printf ("Enter Temp [ Day: %d]: ", nDays+1); 
        scanf ("%f", &temp); 

        if (temp >= 85)
        { 
            printf ("Hot!\n"); 
        }
        else if (temp >= 60 && temp <= 84)
        { 
            printf ("Pleasant!\n"); 
        }
        else 
        { 
            printf ("Cold!\n"); 
        }
        nDays++; 
    }
    while (1); 
    printf("nDays=%d,nDaysHot=%d,nDaysPleasant=%d,nDaysCold=%d\n",nDays, nDaysHot, nDaysPleasant, nDaysCold);
}