#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d", &n);
    int x = 1;
    for(int i = 1; i <= n; ++i){
        for(int k = 1; k <= 2*(n-i); ++k){
            printf(" ");
        }
        for(int j = 1; j <= 2*i-1; ++j){
            if(j > 1 && j < 2*i-1 && j == i){
                printf("%d ", ((x-2) + (x))*(j-1));
            } else {
                printf("%d ", x);
                x += 2;
            }
        }
        printf("\n");
    }
    return 0;
}