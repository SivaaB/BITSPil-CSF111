#include <stdio.h>

struct Country {
    char name[50];
    char capital[50];
    int totalCases;
    int recoveries;
    float recoveryRate;
};

int main() 
{
    int n;
    float maxRecoveryRate = 0.0;
    int maxRecoveryIndex = 0;

    printf("Enter the number of countries: ");
    scanf("%d", &n);

    struct Country countries[n];
    
    for (int i = 0; i < n; i++) 
    {
        printf("Country %d:\n", i + 1);

        printf("Enter the name of the country: ");
        scanf("%s", countries[i].name);

        printf("Enter the capital of the country: ");
        scanf("%s", countries[i].capital);

        printf("Enter the total number of cases: ");
        scanf("%d", &countries[i].totalCases);

        printf("Enter the number of recoveries: ");
        scanf("%d", &countries[i].recoveries);

        countries[i].recoveryRate = (float)countries[i].recoveries / countries[i].totalCases * 100;

        if (countries[i].recoveryRate > maxRecoveryRate) 
        {
            maxRecoveryRate = countries[i].recoveryRate;
            maxRecoveryIndex = i;
        }
    }

    printf("\nCountry with Maximum Recovery Rate:\n");
    printf("Name: %s\n", countries[maxRecoveryIndex].name);
    printf("Capital: %s\n", countries[maxRecoveryIndex].capital);
    printf("Total Cases: %d\n", countries[maxRecoveryIndex].totalCases);
    printf("Recoveries: %d\n", countries[maxRecoveryIndex].recoveries);
    printf("Recovery Rate: %.2f%%\n", countries[maxRecoveryIndex].recoveryRate);
}
