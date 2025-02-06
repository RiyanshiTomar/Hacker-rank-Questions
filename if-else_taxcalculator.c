#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    float income, tax = 0;
    if (scanf("%f", &income) != 1 || income < -10000000 || income > 10000000) {
        printf("INVALID\n");
        return 0;
    }

    if (income <= 250000) {
        tax = 0;
    } else if (income <= 500000) {
        tax = (income - 250000) * 0.05;
    } else if (income <= 1000000) {
        tax = (250000 * 0.05) + ((income - 500000) * 0.20);
    } else {
        tax = (250000 * 0.05) + (500000 * 0.20) + ((income - 1000000) * 0.30);
    }

    if (income >= 0) {
        printf("%.2f\n", tax);
    } else {
        printf("INVALID\n");
    }

    return 0;
}
