#include <stdio.h>

int main() {
    char first_name[20], middle_name[20], last_name[20], full_name[60];
    int i, j, k;

    printf("Enter your first name: ");
    scanf("%s", first_name);

    printf("Enter your middle name: ");
    scanf("%s", middle_name);

    printf("Enter your last name: ");
    scanf("%s", last_name);

    for (i = 0; first_name[i] != '\0'; i++) 
    {
        full_name[i] = first_name[i];
    }
    full_name[i++] = ' ';
    for (j = 0; middle_name[j] != '\0'; j++, i++) 
    {
        full_name[i] = middle_name[j];
    }
    full_name[i++] = ' ';
    for (k = 0; last_name[k] != '\0'; k++, i++) 
    {
        full_name[i] = last_name[k];
    }
    full_name[i] = '\0';

    printf("Your full name is: %s\n", full_name);
}
