#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d", &n);
    for(int i = 0; i <= n-1; ++i){
       for(int j = 0; j <= n-1; ++j){
            if((i == 0) || (i == n-1) || (j == n/2)){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        for(int j = 1; j <= 2; ++j){
            printf(" ");
        }
        for(int j = 0; j <= n-1; ++j){
            if((j == 0) || (i == j) || (j == n-1)){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        for(int j = 1; j <= 2; ++j){
            printf(" ");
        }
        for(int j = 0; j <= n-1; ++j){
            if((j == 0) || (i == j) || (j == n-1)){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        for(int j = 1; j <= 2; ++j){
            printf(" ");
        }
        for(int j = 0; j <= n-1; ++j){
            if((i == 0 && j != 0 && j != n-1) || (i == n-1 && j != 0 && j != n-1) || (j == 0 && i != 0 && i != n-1) || (j == n-1 && i != 0 && i != n-1)){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        for(int j = 1; j <= 2; ++j){
            printf(" ");
        }
        for(int j = 0; j <= 2 * n - 1; ++j){
            if((j == i) || (j == (2 * n - 2 - i))){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        for(int j = 1; j <= 2; ++j){
            printf(" ");
        }
         for(int j = 0; j <= n-1; ++j){
            if((j == 0 && i != 0) || (j == n-1 && i != 0) || (i == 0 && j != 0 && j != n-1) || i == n/2){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        for(int j = 1; j <= 2; ++j){
            printf(" ");
        }
         for(int j = 0; j <= n-1; ++j){
            if((i == 0) || (j == n/2)){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        for(int j = 1; j <= 2; ++j){
            printf(" ");
        }
        for(int j = 0; j <= n-1; ++j){
            if((i == 0) || (i == n-1) || (j == n/2)){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        for(int j = 1; j <= 2; ++j){
            printf(" ");
        }
        for(int j = 0; j <= n-1; ++j){
            if((i == 0 && j != 0 && j != n-1) || (i == n-1 && j != 0 && j != n-1) || (j == 0 && i != 0 && i != n-1) || (j == n-1 && i != 0 && i != n-1)){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        for(int j = 1; j <= 2; ++j){
            printf(" ");
        }
        for(int j = 0; j <= n-1; ++j){
            if((j == 0) || (i == j) || (j == n-1)){
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