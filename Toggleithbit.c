#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, i;
    scanf("%d\n", &n);
    scanf("%d\n", &i);
    
    if(n < -1000000000 && n > 1000000000){
        printf("Invalid\n");
    }
    if(i < 0 && i > 31){
        printf("Invalid\n");
    }
    
    n = (n ^ (1 << i));
    
    printf("%d\n", n);
    
    return 0;
}