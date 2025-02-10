#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d", &n);
    if(n == 0){
        printf("Binary equivalent of %d: 0", n);
    }
    else {
        int num = n;
        int binary = 0;
        int place = 1;
        while(n > 0){
            binary += (n % 2)*place;
            n /= 2;
            place *= 10;
        }
        printf("Binary equivalent of %d: %d", num, binary);
    }
    return 0;
}