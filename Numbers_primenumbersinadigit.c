/*Write a program to count the nuber of digits of a given number N that are prime.

Input Format

A single integer N
Constraints

−10^18 ≤ N ≤ 10^18
Output Format

Print a single integer representing the count of prime digits in N.
Sample Input 0

128
Sample Output 0

1*/
#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    long long int n;
    scanf("%lld", &n);
    
    if(n < 0){
        n = -n;
    }
    int count = 0, x;
    
    while(n >  0){
        x = n % 10;
        n /= 10;
        if(x == 2 || x == 3|| x == 5 || x == 7){
            count++;
        }
        
    }
    printf("%d", count);
    return 0;
}
