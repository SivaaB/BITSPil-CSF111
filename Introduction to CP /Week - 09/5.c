#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, flag = 0;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) 
    {
        if (str1[i] != str2[i]) 
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0 && str1[i] == '\0' && str2[i] == '\0') 
    {
        printf("The two strings are equal.\n");
    } 
    else 
    {
        printf("The two strings are not equal.\n");
    }

}
