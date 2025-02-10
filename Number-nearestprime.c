#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
     int n, i, lower, upper, Prime;
    scanf("%d", &n);
    
    lower = upper = n;
    
    if(n == 1 || n == 0){
        printf("2");
        return 0;
    }
    
    while (1) {
        Prime = 1;
        for (i = 2; i * i <= lower && lower > 1; i++) {
            if (lower % i == 0) {
                Prime = 0;
                break;
            }
        }
        if (Prime && lower > 1) {
            printf("%d\n", lower);
            break;
        }
        
        Prime = 1;
        for (i = 2; i * i <= upper; i++) {
            if (upper % i == 0) {
                Prime = 0;
                break;
            }
        }
        if (Prime) {
            printf("%d\n", upper);
            break;
        }
        
        lower--;
        upper++;
    }
    return 0;
}