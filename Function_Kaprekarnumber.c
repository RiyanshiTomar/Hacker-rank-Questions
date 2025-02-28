/*A Kaprekar Number is a number whose square can be split into two parts that sum up to the original number.

Write a function is_kaprekar(n) that returns 1 if the given number n is a Kaprekar number, otherwise returns 0.

Function Signature

int is_kaprekar(int n);
Splitting Rule

Compute S=N^2 (square of N).
Determine the number of digits in N (let's call it d).
Split S into two parts:
Right part: The last d digits of S.
Left part: The remaining digits of S (if any).
If (left part + right part) = N, then N is a Kaprekar number.
Input Format

There is no input handling required in the function.
The function takes a single integer n as the parameter.
Constraints

1 ≤ n ≤ 10^5
Output Format

Do not print anything inside the function.
The function should return 1 if the number is a Kaprekar number, otherwise return 0.
Sample Input 0

297
Sample Output 0

1*/
#include <stdio.h>
#include <math.h>

int digitofnumber(int n) {
    int count = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;
}


int is_kaprekar(int n) {
    // Implement logic here
    int square = n * n;
    int d = digitofnumber(n);
    int divisor = pow(10, d);
    int right_part = square % divisor;
    int left_part = square / divisor;
    return (left_part + right_part == n) ? 1 : 0;
    
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", is_kaprekar(n));
    return 0;
}