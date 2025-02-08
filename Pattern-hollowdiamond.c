#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n ;
    scanf("%d", &n);
    

    // Validate input: n must be a positive integer within the range
    if (n <= 1 || n > 50) {
        printf("Shape Not Possible\n");
        return 0;
    }

    // Top half of the diamond (including the middle row)
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print asterisks and spaces for hollow pattern
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n || i == j) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // Bottom half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print asterisks and spaces for hollow pattern
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == j) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

    