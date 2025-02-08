#include <stdio.h>
#include <stdbool.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    // last two bits must be zero.....remember this
    int n;
    
    scanf("%d", &n);
    
    if((n & 3) == 0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}