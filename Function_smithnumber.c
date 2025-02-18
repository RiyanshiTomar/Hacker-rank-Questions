/*A Smith number is a composite number where the sum of its digits is equal to the sum of the digits of its prime factors (excluding the number itself).

Write a function is_smith_number(n) that returns 1 if the given number n is a Smith number, otherwise returns 0.

Function Signature

int is_smith_number(int n);
Input Format

There is no input handling required in the function.
The function takes a single integer n as the parameter.
Constraints

1 ≤ n ≤ 10^6
Output Format

Do not print anything inside the function.
The function should return 1 if the number is a Smith number, otherwise return 0.
Sample Input 0

666
Sample Output 0

1*/
#include <stdio.h>

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}


int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}


int is_smith_number(int n) {
     if (isPrime(n)) return 0;  

    int sumd = sumOfDigits(n); 
    int sump = 0;
    int num2 = n;
    int i = 2;

    while (num2 != 1) {
        if (num2 % i == 0) {
            sump += sumOfDigits(i); 
            num2 /= i;
        } else {
            ++i;
        }
    }
    
    return sumd == sump; 
}
   
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", is_smith_number(n));
    return 0;
}