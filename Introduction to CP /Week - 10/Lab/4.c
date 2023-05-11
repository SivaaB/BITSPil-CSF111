#include <stdio.h>
#include <string.h>

int main()
{
    char word[100];
    printf("Enter a word: ");
    gets(word); 

    int n, flag = 0;
    
    n = strlen(word);
    char copy[100];
    
    for (int i = n-1; i >= 0; i--)
    { 
        for (int j = 0; j < n ; j++)
        { 
            copy[j] = word[n - 1 - j];
        }
    }

    printf ("Reversed String is: "); 
    { 
        for (int i = 0; i < n; i++)
        { 
            printf ("%c", copy[i]); 
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        if(word[i] == copy[i])
        {
            flag = 0; 
            continue; 
        }
        else 
        {
            flag=1; 
        }
        break;
    }

    if (flag == 1)
    {
        printf("\nGiven string is not a palindrome.\n");
    } 
    else
    {
        printf("\nGiven string is a palindrome\n");
    }
}