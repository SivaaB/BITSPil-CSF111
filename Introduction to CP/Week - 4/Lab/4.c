#include <stdio.h> 

int main (void)
{ 
    int mark_list1[5] = {22, 33, 44, 55, 66}; 
    int mark_list2[5] = {22, 33, 44, 55, 66}; 
    
    int flag = 0; 

    for (int i = 0; i < 5; i++)
    { 
        for (int j = 0; j < 5; j++)
        { 
            if (mark_list1[i] == mark_list2[j])
            { 
                flag = 1; 
                break; 
            } 
        }  
    }
    if (flag == 1)
    { 
        printf ("Identical\n"); 
    }
    else
    { 
        printf ("Non - Identical\n"); 
    }
}