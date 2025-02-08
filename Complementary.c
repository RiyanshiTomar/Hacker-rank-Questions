#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b;
    scanf("%d %d", &a, &b);
    
    if(b == ~a){
        printf("YES");
    }
    else{
        printf("NO");
    }
    
    
    
    
    return 0;
}