/*Given an integer N, write a program to find:

The smallest prime P1 that is strictly greater than N.
The largest prime P2 that is strictly smaller than N.
Then, return the absolute difference |P1 - P2|.

Note: If P1 or P2 does not exist, consider it as 0.

Input Format

A single integer N.
Constraints

1 ≤ N ≤ 10^6
Output Format

A single integer representing the absolute difference between P1 and P2.
Sample Input 0

10
Sample Output 0

4*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N, P1, P2, i, isPrime;
    scanf("%d", &N);

    P1 = N + 1;
    while (1) {
        isPrime = 1; 
        for (i = 2; i <= sqrt(P1); i++) {
            if (P1 % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) break;
        P1++;
    }

    
    P2 = N - 1;
    while (P2 > 1) {
        isPrime = 1; 
        for (i = 2; i <= sqrt(P2); i++) {
            if (P2 % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) break;
        P2--;
    }

    if (P2 <= 1) P2 = 0;
    printf("%d\n", abs(P1 - P2));

    return 0;
}

    
