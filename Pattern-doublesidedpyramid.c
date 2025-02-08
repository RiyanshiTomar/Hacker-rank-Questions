#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d", &n);
    if(n <= 1 || n > 50){
        printf("Shape Not Possible");
        return 0;
    }
    for(int i = 1; i <= n; ++i){
        for(int s = 1; s <= n - i; ++s){
            printf(" ");
        }
        for(int j = 1; j <= i; ++ j){
            printf("*");
        }
        printf("  ");
        for(int k = 1; k <= i; ++k){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}