/*Aditi is fascinated by special numbers and has learned about Armstrong numbers. She wants to quickly check if a given number is an Armstrong number or not. Write a program to help Aditi to determine if a number is an Armstrong number.

An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

Input Format

A single integer n.
Constraints

1 <= n <= 10^9
Output Format

Print "YES" if the number is an Armstrong number, otherwise "NO".
Sample Input 0

153
Sample Output 0

YES*/
#include <stdio.h>
#include <math.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d", &n);
    int count = 0;
    int sum = 0;
    int original = n;
    int temp = n;
    while(temp > 0){
        temp /= 10;
        count = count + 1;
        }
        temp = n;
        while(temp > 0){
        int digit = temp % 10;
        sum = sum + pow(digit, count);
        temp /= 10;
        }
        if(sum == original){
            printf("YES");
        }else{
            printf("NO");
        }
    
    
    return 0;
}
