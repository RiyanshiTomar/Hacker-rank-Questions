#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N, i;
    scanf("%d", &N);
    scanf("%d", &i);
    
    if(((N >> i) & 1) == 0){
        printf("0");
    }
    else {
        printf("1");
    }
    
    return 0;
}