#include <stdio.h>

int factorial(int num) {
    int fact = 1;
    for(int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

void check_magic_number(int num) {
    int temp = num, sum = 0, rem;
    while(temp != 0) {
        rem = temp % 10;
        sum += factorial(rem);
        temp /= 10;
    }
    if(num == sum) {
        printf("%d is a magic number\n", num);
    }
    else {
        printf("%d is not a magic number\n", num);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check_magic_number(num);
    return 0;
}
