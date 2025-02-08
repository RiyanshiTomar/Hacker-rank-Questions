#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d", &n);
    if(n <= 2 || n > 50){
        printf("Shape Not Possible");
        return 0;
    }
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
        if(i == 1 || i == n || j == 1 || j == n){
            printf("*");
        }
        else {
            printf("#");
        }
    }
            printf("\n");
}
    
    
    
     /*for (int i = 1; i <= n; i++) {
       if (i == 1 || i == n) {
       for (int j = 1; j <= n; j++) {
                printf("*");
            }
        } else {
            printf("*");
            for (int j = 2; j < n; j++) {
                printf("#");
            }
            printf("*");
        }
        printf("\n");
    }*/
    
    return 0;
}