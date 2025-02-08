#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    scanf("%d", &N);
    
    if(N > 0 && (N & (N - 1)) == 0){
        printf("1");
    }
    else{
        printf("-1");
    }
    return 0;
}