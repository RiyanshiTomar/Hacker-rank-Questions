#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i <= n-1; ++i){
    scanf("%d ", &a[i]);
    }
    int target;
    scanf("%d", &target);
    int i,j;
    for(i = 0; i <= n-1; ++i){
        for(j = i+1; j <= n-1; ++j){
            if((a[i] +a[j]) == target){
                printf("%d %d", a[i], a[j]);
                return 0;
            }
        }
    }
    printf("-1\n");
    
   
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}