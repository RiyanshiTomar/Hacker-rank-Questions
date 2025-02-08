#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    printf("%d", n);
    int max = n;
    while(n != 1){
        if(n <1){
            n = 1;
            if(n > max){
                max = n;
            }
        }
        else if(n % 3 == 0){
            n /= 3;
        }
        else if((n % 5 == 0) && (n % 3 != 0)){
            n -= 5;
        }
        else {
            n *= 5;
            if(n > max){
                max = n;
            }
        }
        printf(" -> %d", n);
    }
    
    printf("\nMax Number: %d\n", max);

    return 0;
}

    