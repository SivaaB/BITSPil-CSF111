// Program 1(a)
#include <stdio.h>

void change(int num);
int main() 
{
    int x;
    
    printf("\n Enter a number: ");
    scanf("%d", &x);

    printf("\n Before function execution, value of 'x' = %d", x);
    
    change(x);
    
    printf("\n After function execution, value of 'x' = %d", x);
    
    return 0;
    
}

void change(int n)
{
    printf("\n Before adding value inside function = %d", n);
    
    n+=100;
    
    printf("\n After adding value inside function = %d", n);
}


// Program 1(b)
#include <stdio.h>

void change(int *num);
int main()
{
    int x;
    
    printf("\n Enter a number: ");
    scanf("%d", &x);
    
    printf("\n Before function call 'x' = %d", x);
    
    change(&x);
    
    printf("\n After function call 'x' = %d", x);
    
    return 0;
}

void change(int *num)
{
    printf("\n Before adding value inside function 'x' = %d", *num);
    (*num)+=100;
    printf("\n After adding value inside function 'x' = %d", *num);
}
