#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    scanf("%d", &N);
    
    if(N < -100000 && N > 100000){
        printf("Invalid\n");
    }
    
    if((N & 1) == 0){
        printf("Even\n");
    }
    else if((N & 1) == 1){
        printf("Odd\n");
    } else{
        printf("Invalid");
    }
    
    
    
    return 0;
}