/*An Automorphic Number is a number whose square ends with the same digits as the number itself.

Write a program to check if a given number N is Automorphic or not.

Input Format

A single integer N
Constraints

0 ≤ N ≤ 10^6
Output Format

Print "[N] is automorphic" if N is an Automorphic number.
Print "[N] is not automorphic" otherwise.
Sample Input 0

25
Sample Output 0

25 is automorphic*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d", &n);
    int number = n;
    int count = 1;
    while(n > 0){
      n = n / 10;
      count *= 10; 
    }
    
    int square = number*number;
    int rem = square % count;
    if(rem == number){
        printf("%d is automorphic", number);
    }
    else{
        printf("%d is not automorphic", number);
    }
    return 0;
}
