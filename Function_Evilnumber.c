/*An Evil Number is a number that has an even number of 1s in its binary representation.

Write a function is_evil_number(n) that returns 1 if the number n is an Evil Number and 0 otherwise.

Function Signature

int is_evil_number(int n);
Input Format

There is no input handling required in the function.
The function takes a single integer n as the parameter.
Constraints

1 ≤ n ≤ 10^6
Output Format

The function should return 1 if n is an Evil Number.
Otherwise, return 0.
Do not print anything inside the function.
Sample Input 0

9
Sample Output 0

1*/
#include <stdio.h>

int count = 0;
int is_evil_number(int n) {
       while (n > 0) {
        count += (n & 1);  
        n >>= 1;  
    } 
    return (count % 2 == 0) ? 1 : 0;
}

int main() {
    int n;
    scanf("%d", &n); 
    printf("%d\n", is_evil_number(n));
    return 0;
}