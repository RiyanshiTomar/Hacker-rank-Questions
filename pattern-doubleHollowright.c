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
        for(int j = 1; j <= i; ++j){
            if(i == 1|| i == n || j == 1 || j == i){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        for(int s = 1; s <= 2 *(n-i); ++s){
            printf(" ");
        }
        for(int k = 1; k <= i; ++k){
            if(i == 1|| i == n || k == 1 || k == i){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}