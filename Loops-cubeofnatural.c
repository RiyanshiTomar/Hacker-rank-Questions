#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d", &n);
    for(int i = 1; i<=n; ++i){
        printf("%d ", i*i*i);
    }
    return 0;
}