/*A number is called a Strong number if the sum of the factorials of its digits is equal to the number itself.

Given an integer N, determine whether it is a Strong number or not.

Input Format

A single integer N
Constraints

1 ≤ N ≤ 10⁶
Output Format

Print "YES" if N is a Strong number, otherwise print "NO"
Sample Input 0

145
Sample Output 0

YES*/
#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d", &n);
    int num = n;
    
    int sum = 0;
    while(n > 0){
       int factorial = 1;
       int x = n % 10;
        for(int i = x; i >= 1; --i){
            factorial = factorial * i;
        }
        sum = sum + factorial;
        n = n/10;
    }
    if(sum == num){
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}