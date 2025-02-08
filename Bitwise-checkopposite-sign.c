#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b;
    scanf("%d %d", &a, &b);
    
    /*bitstatus = ((a >> 31) ^ (b >> 31));
    if(bitstatus == 0){
        printf("No");
    }
    else {
        printf("Yes");
    }*/
    int n = a * b;
     if((a == 0 && b < 0) || (a < 0 && b == 0)){
        printf("Yes");
         return 0;
     }
    ((n >> 31) & 1)? printf("Yes") : printf("No");
   
    
    return 0;
}