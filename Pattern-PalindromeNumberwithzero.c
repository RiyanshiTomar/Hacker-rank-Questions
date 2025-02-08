#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d", &n);
    for(int i = 0; i <= n-1; ++i){
        for(int j = 1; j <= n-1-i; j++){
            printf(" ");
        }
        for(int j = i; j >= 0; j--){
            printf("%d", j);
        }
        for(int j = 1; j <= i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}