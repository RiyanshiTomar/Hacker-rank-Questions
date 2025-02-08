#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d", &n);
    int x = 1;
    for(int i = 1; i <= n; ++i){
        int value = x;
        for(int j = 1; j <= i; ++j){
          
        
        printf("%d ", value);
            value += (n-j);
        }
         printf("\n");
        x++;
        }
         
        
    
    return 0;
}