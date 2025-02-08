#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,x;
    scanf("%d %d", &n, &x);
    for(int i = 1; i<= n; ++i){
        printf("%d ", x*i);
    }
    return 0;
}