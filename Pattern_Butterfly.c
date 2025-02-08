#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d", &n);
    if(n <= 1 || n >50){
        printf("Shape Not Possible");
        return 0;
    }
    
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= i; ++j){
            printf("*");
        }
        for(int k = 1; k <= 2*(n-i); ++k){
            printf(" ");
        }
        
        for(int j = 1; j <= i; ++j){
            printf("*");
        }
        printf("\n");
    }
    for(int i = n-1; i >= 1; --i){
        for(int j = 1; j <= i; ++j){
            printf("*");
        }
        for(int k = 1; k <= 2*(n-i); ++k){
            printf(" ");
        }
        
        for(int j = 1; j <= i; ++j){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
