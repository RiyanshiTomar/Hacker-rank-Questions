/*Implement a function find_unique_digit_product(n) that returns the product of the unique digits present in the given number n. The product should only consider distinct digits, ignoring any repeating digits.

Function Signature

int find_unique_digit_product(int n);
Input Format

There is no input handling required in the function.
The function takes a single integer n as the parameter.
Constraints

0 ≤ n ≤ 10^9
Output Format

Do not print anything inside the function.
The function must return the unique digits product as an integer.
Sample Input 0

123
Sample Output 0

6*/
#include <stdio.h>

int find_unique_digit_product(int n) {
     int used_digits = 0, product = 1, has_unique = 0;

    if (n == 0) {
        return 0;
    }

    while (n > 0) {
        int digit = n % 10;
        int mask = 1 << digit;
        if (!(used_digits & mask)) {
            used_digits |= mask;
            product *= digit;
            has_unique = 1;
        }
        n /= 10;
    }
    
    return has_unique ? product : 0;
}


int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", find_unique_digit_product(n));
    return 0;
}




