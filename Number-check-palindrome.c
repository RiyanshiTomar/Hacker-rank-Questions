#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, remainder, reversed = 0;
    scanf("%d", &n);
    int temp = n;
    while(n != 0){
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
        
    }
    if(temp == reversed){
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}