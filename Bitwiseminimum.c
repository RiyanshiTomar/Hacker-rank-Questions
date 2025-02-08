#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a,b;
    scanf("%d  %d", &a, &b);
    int x = a - b;
    int sign = ((x >> 31) & 1);
    
    
    printf("%d", (a * sign) + (b *(1 - sign)));
    
    return 0;
}