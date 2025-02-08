#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d", &n);
    
    int a = (n << 3) - n;
    int result = (a >> 1);
    printf("%d", result);
    return 0;
}