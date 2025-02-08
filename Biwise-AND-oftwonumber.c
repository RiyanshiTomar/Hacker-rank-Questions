#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a, b;
    scanf("%d %d", &a, &b);
    int result = ~(~a | ~b);
    printf("%d", result);
    
    return 0;
}

//there is one more method also(a^b)^(a|b).....like that please verify once....