#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N;
    scanf("%d", &N);
    
    N = (N & -N);
    printf("%d", N);
    return 0;
}