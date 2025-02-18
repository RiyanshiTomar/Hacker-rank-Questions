/*A number N is called a Supreme Prime if:

N is a prime number.
The sum of its digits is also a prime number.
Given an integer N, write a program to determine whether it is a Supreme Prime or not.

Input Format

A single integer N.
Constraints

1 ≤ N ≤ 10^6
Output Format

Print "YES" if N is a Supreme Prime, otherwise print "NO".
Sample Input 0

23
Sample Output 0

YES*/
#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d", &n);
    int num = n;
    int sum = 0;
    if(num == 1 || num ==0){
        printf("NO");
        return 0;
    }
    if(num < 1 || num > 1000000){
        printf("NO");
        return 0;
    }
     int flag = 1;
    
    for(int i= 2; i*i <= n; ++i){
        if(n % i == 0){
            flag = 0;
            printf("NO");
            return 0;
        }
    }
    if(flag == 1){
        while(n > 0){
           int  x = n % 10;
            sum = sum + x;
            n = n/10;
        }
    }

    for(int j = 2; j*j <= sum; ++j){
        if(sum % j == 0){
            printf("NO");
            return 0;
        }
    }
   
        printf("YES");
    
    return 0;
}
