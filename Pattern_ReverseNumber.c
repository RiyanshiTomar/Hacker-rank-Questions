#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d", &n);
    int x = 1;
    for(int i = 1; i <= n; ++i){
        int value = x + i - 1;
        for(int j = 1; j <= i; ++j){
            printf("%d ", value--);
        }
        x+=i;
        printf("\n");
    }
    return 0;
}