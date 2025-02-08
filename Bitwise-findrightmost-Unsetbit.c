#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d", &n);
    if(n == -1){
        printf("-1\n");
        return 0;
    }
    int unsetbit = ~n & (n + 1);
    if(unsetbit == 0){
        printf("-1");
    }
    else {
        int position = 1;
        while((unsetbit >>= 1) > 0){
            position++;
        }
            printf("%d\n", position);
        
    }
    
    
    return 0;
}