#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d", &n);
    if(n <= 0 || n > 50){
        printf("Shape Not Possible");
    }
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= i; ++j){
            if(i % 2 == 0 && j % 2 == 0){
                printf("1");
            }
            else if(i % 2 != 0 && j % 2 != 0){
                printf("1");
            }
            else {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
