#include <stdio.h> 

int sum, digit; 

int lcm(int n1,int n2)
{ 
    static int multiple = 0;
    multiple += n2;
    if ((multiple % n1 == 0) && (multiple % n2 == 0)) 
    {
        return multiple;
    }
    else 
    { 
        lcm (n1,n2); 
    }
}

int main()
{ 
    int n1, n2, LCM;  
    printf ("Enter both numbers: "); 
    scanf ("%d %d", &n1, &n2); 
    LCM = lcm(n1,n2); 
    printf ("LCM of %d and %d is %d\n", n1, n2, LCM); 
}