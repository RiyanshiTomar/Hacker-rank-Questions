/*Samay loves exploring special numbers and recently learned about perfect numbers. He wants to quickly check if a given number is a perfect number or not. Write a program to determine this for him.

A perfect number is a positive integer that is equal to the sum of its proper divisors (excluding itself).

Input Format

A single integer n.
Constraints

1 <= n <= 10^9
Output Format

Print "YES" if the number is a perfect number, otherwise "NO".
Sample Input 0

6
Sample Output 0

YES*/
#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d", &n);
    int sum = 0;
    for(int i = 1; i < n; ++i){
        if(n % i == 0){
            sum = sum + i;
        
        }
    }
    if(sum == n){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}