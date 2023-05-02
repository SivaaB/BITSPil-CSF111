#include <stdio.h> 

int main (void)
{ 
    int variable_choice; 

    printf ("Variable Choice: "); 
    scanf ("%d", &variable_choice); 

    switch (variable_choice)
    {
    case 1:
        printf ("Hello\n"); 
        break;
    case 2: 
        printf ("Tea?\n"); 
        break;
    case 3: 
        printf ("Coffee?\n"); 
        break;
    case 4: 
        printf ("Milk Shake?\n"); 
        break;
    case 5: 
        printf ("Juice?\n"); 
        break;
    default:
        printf ("Bye\n"); 
        break;
    }
}