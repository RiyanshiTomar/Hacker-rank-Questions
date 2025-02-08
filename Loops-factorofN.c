#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   /* int n, num = 1;
    scanf("%d", &n);
    printf("%d", n);
    for(int i = n-1; i >= 1; --i){
        if(n % i == 0){
            num++;
        }
        if(((n % i) == 0) && ((num % 2) == 1)){
            printf(" %d",i);
        }
    }
    printf(".");*/
    
    int n;
    scanf("%d", &n);
    int skip = 0;
    printf("%d", n);
    for(int i = n-1; i >= 1; --i){
        if(n % i == 0){
            if(skip == 1){
            printf(" %d", i);
            } 
            skip = 1 - skip;
        }
    }
    printf(".");
    
    return 0;
}