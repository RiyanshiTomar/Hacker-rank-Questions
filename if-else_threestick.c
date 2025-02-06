#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("Lengths: [%d, %d, %d]\n", a, b, c);
    
    if(a + b > c && a + c > b && b + c > a){
        if(a == b && b == c){
            printf("Type: Equilateral\n");
            printf("All sides are of the same length.\n");
        } else if(a == b || b == c || a ==c){
             printf("Type: Isosceles\n");
            printf("Exactly two sides are equal.\n");
        } else {
            printf("Type: Scalene\n");
            printf("All sides are of different lengths.\n");
        }
    } else{
        printf("Type: Invalid\n");
        printf("Cannot form a valid shape.\n");
    }
            
        
    
    return 0;
}