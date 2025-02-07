#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int A,B;
    scanf("%d\n", &A);
    scanf("%d\n", &B);
    
    if(A < -100000 && A > 100000){
        printf("Invalid\n");
    }
    if(B < -100000 && B > 100000){
        printf("Invalid\n");
    }
    A = A ^ B;
    B = B ^ A;
    A = A ^ B;
    printf("%d\n", A);
    printf("%d", B);
    
    return 0;
}