#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d", &n);
    if(n <= 1 || n > 100){
        printf("Shape Not Possible");
        return 0;
    }
    
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= i - 1; ++j){
            printf(" ");
        }
        for(int k = 1; k <= n-i+1; ++k){
            if(i == 1 || k == 1 || k == n-i+1){
                printf("*");
                printf(" ");
            }
            else {
                printf(" ");
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int i = 2; i <= n; ++i){
        for(int j = 2; j <= n-i+1; ++j){
            printf(" ");
        }
        for(int k = 1; k <= i; ++k){
            if(i == n || k == 1 || k == i){
                printf("*");
                printf(" ");
            }
            else {
                printf(" ");
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}