#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i){
       int value = i;
        for(int j = 1; j <= i; ++j){
            if(j == 1){
                printf("%d ", value);
            }
            else if(j % 2 == 0){
                value = value + 2*n - 2*i + 1;
                printf("%d ",value);
            }
            else if(j % 2 != 0){
                value = value + 2*(i - j + 1);
                printf("%d ", value);
            }
            
        }
        printf("\n");
    } 
    return 0;
}