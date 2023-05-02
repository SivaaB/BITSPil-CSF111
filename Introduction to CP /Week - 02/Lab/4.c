#include <stdio.h> 

int main (void)
{ 
    int s1; 
    int s2; 
    int s3; 
    int s4; 
    int s5; 
    int percentage; 

    printf ("Subject - 1: "); 
    scanf ("%d", &s1); 
    printf ("Subject - 2: "); 
    scanf ("%d", &s2); 
    printf ("Subject - 3: "); 
    scanf ("%d", &s3); 
    printf ("Subject - 4: "); 
    scanf ("%d", &s4); 
    printf ("Subject - 5: "); 
    scanf ("%d", &s5); 

    percentage = (s1 + s2 + s3 + s4 + s5 / 500) * 100; 

    if (percentage > 80)
    { 
        printf ("Distinction\n");
    }
    else if(percentage >= 60)
    {
        printf ("First\n");
    }
    else if (percentage >= 45)
    { 
        printf ("Second\n");
    }
    else if (percentage < 45)
    { 
        printf ("Fail\n");
    }

}
