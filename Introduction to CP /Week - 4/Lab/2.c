#include <stdio.h> 
int main()
{ 
    int n1, digit, unit_digit, nod; 
    int sum1, remainder, rev_of_sum = 0; 
    int og_sum, og_num; 
    printf ("Enter number: "); 
    scanf ("%d", &n1); 
    printf ("Enter number of digits: "); 
    scanf ("%d", &nod); 
    og_num = n1; 

    do
    { 
        digit = n1 % 10; 
        sum1 += digit; 
        n1 /= 10; 
    }
    while (n1 > 0); 
    printf ("Sum of digits in number: %d\n", sum1); 
    
    og_sum = sum1; 
    
    do
    { 
        remainder = sum1 % 10; 
        rev_of_sum = (rev_of_sum*10) + remainder; 
        sum1 /= 10; 
    }
    while (sum1 > 0); 
    printf ("Reverse of sum of digits of first number: %d\n", rev_of_sum); 

    if (rev_of_sum * og_sum == og_num)
    { 
        printf ("Magic Number!\n"); 
    }
    else 
    { 
        printf ("Not a Magic Number!\n"); 
    }
}
