/*Given an integer N, write a program to count the number of twin prime pairs that exist in the range [1, N] (inclusive).

A twin prime pair is defined as two prime numbers (p, q) where:

p and q are both prime numbers.
q = p + 2, i.e., the two primes differ by exactly 2.
(p, q) and (q, p) should be counted as the same pair, so you should only count one of them.
Input Format

A single integer N
Constraints

1 ≤ N ≤ 10^6
Output Format

A single integer representing the count of unique twin prime pairs in the range [1, N].
Sample Input 0

10
Sample Output 0

2*/
#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    scanf("%d", &N);
    int k = 3; 
    int count = 0;
    for(int i = 3; i <= N; ++i){
        int flag = 1;
        for(int j = 2; j*j <= i; ++j){
           if(i % j == 0) {
               flag = 0;
               break;
           }
        }
        if(flag == 1){
            if(i == k+2){
                count++;
            }
            k = i;
        }
    }
    printf("%d", count);
    return 0;
}
