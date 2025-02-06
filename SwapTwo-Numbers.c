#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    
    int temp = a;
    
    a = b;
    b = temp;
    
    printf("a = %d\n", a);
    printf("b = %d", b);
    
    return 0;
}