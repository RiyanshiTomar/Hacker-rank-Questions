#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i+=2){
        printf("%d ", i);
    }
    return 0;
}