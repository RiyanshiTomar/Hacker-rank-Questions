#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int num,bitstatus;
    scanf("%d", &num);
    
    bitstatus = (num >> 31);
    if(bitstatus == 0){
        printf("Positive");
    }
    else{
        printf("Negative");
    }
    
    return 0;
}