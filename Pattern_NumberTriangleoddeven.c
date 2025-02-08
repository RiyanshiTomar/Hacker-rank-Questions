#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i){
        if(i % 2 == 0){
            for(int j = 1; j <= i; ++j){
                printf("%d ", 2*j);
            }
        }
        else {
            for(int j = 1; j <= i; ++j){
                printf("%d ", 2*j-1);
            }
        }
        printf("\n");
    }
    return 0;
}