#include <stdio.h>


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a,b;
    scanf("%d  %d", &a, &b);
    int x = a - b;
    int sign = (x >> 31);
    
    
    //printf("%d", (b * sign) + (a *(1 - sign)));another method also
    printf("%d", (b & sign) | (a & (~sign)));
    
    

    
    
    
    return 0;
}