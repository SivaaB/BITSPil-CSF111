#include <stdio.h> 

void prime (int n) 
{ 
    int flag = 0; 
    for (int i = 2; i < n; i++)
    { 
        if (n % i == 0)
        { 
            flag = 1; 
        }
    }

    if (flag == 0)
    { 
        printf ("Prime Number\n"); 
    }
    else 
    { 
        printf ("Not a Prime Number\n"); 
    }

}

int main ()
{ 
    int n; 
    printf("Enter number: "); 
    scanf ("%d", &n); 

    prime (n);
}