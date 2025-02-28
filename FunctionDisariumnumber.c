/*A Disarium number is a number where the sum of its digits powered by their position (starting from the leftmost digit, with the first position as 1) equals the number itself.

Write a function is_disarium_number(n) that returns 1 if the number n is a Disarium number and 0 otherwise.

Function Signature

int is_disarium_number(int n);
Input Format

There is no input handling required in the function.
The function takes a single integer n as the parameter.
Constraints

1 ≤ n ≤ 10^6
Output Format

Do not print anything inside the function.
The function should return 1 if the number is a Disarium number, otherwise return 0.
Sample Input 0

89
Sample Output 0

1*/
#include <stdio.h>
#include <math.h>
int digit = 0;
int sum = 0;
int num;
int digitofnumber(int n){
    while(n > 0){
        digit = digit + 1;
        n /= 10;
    }
    return digit;
}

int is_disarium_number(int n) {
    int digit = digitofnumber(n);
    // Implement this function
    while(n > 0){
        int rem = n % 10;
        sum += pow(rem, digit);
        digit--;
        n /= 10;
    }
    return (sum == num) ? 1 : 0;
    
}

int main() {
    int n;
    scanf("%d", &n);
    num = n;
    printf("%d\n", is_disarium_number(n));
    return 0;
}