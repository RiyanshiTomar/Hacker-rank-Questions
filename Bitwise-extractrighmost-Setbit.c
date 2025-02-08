#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,x,y;
    scanf("%d", &n);
    if (n == 0) {
        printf("0");
    }

    else {
        x = n & (n-1);
        y = n ^ x;
        for(int i = 32; i >= 1; --i){
            if((y >> (i - 1)) & 1){
                printf("%d", i);
            }
        }
    }
    return 0;

}
    
    