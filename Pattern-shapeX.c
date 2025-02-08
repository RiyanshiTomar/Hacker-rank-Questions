#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n ;
    scanf("%d", &n);
    
    if (n <= 1 || n > 50) {
        printf("Shape Not Possible\n");
        return 0;
    }


    if (n % 2 == 0) {
        n++;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i + j == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

