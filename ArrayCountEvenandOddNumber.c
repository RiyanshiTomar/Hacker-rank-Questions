#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i <= n-1; ++i){
        scanf("%d", &a[i]);
    }
    int even_count = 0;
    int odd_count = 0;
    for(int i = 0; i <= n-1; ++i){
        if(a[i] % 2 == 0){
            ++even_count;
        }
        else {
            ++odd_count;
        }
    }
    printf("%d ", even_count);
    printf("%d ", odd_count);
    return 0;
}