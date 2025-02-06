#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b, c, largest;
    scanf("%d ", &a);
    scanf("%d ", &b);
    scanf("%d", &c);
    
    if(a >= b && a >= c){
        largest = a;
    }else if(b >= a && b >= c){
        largest = b;
    }else{
        largest = c;
    }
    
    printf("The largest number is : %d\n", largest);
    
    
    return 0;
}