#include <stdio.h>

struct GDP {
    char country_name[50];
    char capital[50];
    int gdp_2023;
    float gdp_2022;
    float growth_Rate;
};

int main() {
    int n, min_Growth_Rate;
    printf("Enter number of countries: ");
    scanf("%d", &n);

    struct GDP countries[n];

    for (int i = 0; i < n; i++) {
        printf("Enter the following details for %dth country:\n", i+1);
        printf("Country Name: ");
        scanf("%s", countries[i].country_name);
        printf("Capital: ");
        scanf("%s", countries[i].capital);
        printf("2023 GDP: ");
        scanf("%d", &countries[i].gdp_2023);
        printf("2022 GDP: ");
        scanf("%f", &countries[i].gdp_2022);

        countries[i].growth_Rate = ((countries[i].gdp_2023 - countries[i].gdp_2022) / countries[i].gdp_2022) * 100;
    }

    min_Growth_Rate = countries[0].growth_Rate;
    int min_Growth_Rate_index = 0;
    for (int i = 1; i < n; i++) {
        if (countries[i].growth_Rate < min_Growth_Rate) {
            min_Growth_Rate = countries[i].growth_Rate;
            min_Growth_Rate_index = i;
        }
    }
    printf("Country with the minimum growth rate:\n");
    printf("Country Name: %s\n", countries[min_Growth_Rate_index].country_name);
    printf("Capital: %s\n", countries[min_Growth_Rate_index].capital);
    printf("2023 GDP: %d\n", countries[min_Growth_Rate_index].gdp_2023);
    printf("2022 GDP: %f\n", countries[min_Growth_Rate_index].gdp_2022);
    printf("Growth Rate: %f\n", countries[min_Growth_Rate_index].growth_Rate);
}