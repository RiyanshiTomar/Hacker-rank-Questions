#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int X,Y,Z;
    scanf("%d", &X);
    scanf("%d", &Y);
    scanf("%d", &Z);
    
    if(X < 1 || X > 1000000000){
        printf("Invalid\n");
    }
    if(Y < 1 || Y > 1000000000){
        printf("Invalid\n");
    }
    if(Z < 1 || Z > 1000000000){
        printf("Invalid\n");
    }
    if(X % Y == 0 && X % Z == 0){
        printf("X defeats all!");
    } else if(X % Y == 0){
        printf("Y triumphs over X!");
    } else if(X % Z == 0){
        printf("Z outsmarts X!");
    } else {
        printf("X remains undefeated!");
    }
    
    
    return 0;
}