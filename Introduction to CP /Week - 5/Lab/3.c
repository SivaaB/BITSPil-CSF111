#include <stdio.h> 

int main (void)
{ 

    int marks[5];  
    int sum = 0; 
    float percentage; 

    printf ("Enter marks in 5 subjects: "); 
    for (int i = 0; i < 5; i++)
    { 
        scanf ("%d", &marks[i]); 
        sum += marks [i]; 
    } 
    percentage = (sum/5); 

    printf ("Total: %d\n", sum); 
    printf ("Percent: %f\n", percentage); 

    if (percentage >= 90)
    { 
        printf("Grade - A\n"); 
    }
    else if (percentage >= 80)
    { 
        printf("Grade - B\n"); 
    }
    else if (percentage >= 70)
    { 
        printf("Grade - C\n"); 
    }
    else if (percentage >= 60)
    { 
        printf("Grade - D\n"); 
    }
    else if (percentage >= 40)
    { 
        printf("Grade - E\n"); 
    }
    else if (percentage < 40)
    { 
        printf("Grade - F\n"); 
    }

}