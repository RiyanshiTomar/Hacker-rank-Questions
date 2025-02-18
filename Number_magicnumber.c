/*A number is considered a Magic Number if the repeated sum of its digits eventually results in 1.

To determine if a number is a Magic number:

Calculate the sum of its digits.
If the result is a number with more than one digit, repeat the process until you are left with a single digit.
If the final single digit is 1, the number is a Magic number; otherwise, it is not.
Input Format

A single integer N
Constraints

0 ≤ N ≤ 10^6
Output Format

Print "[N] is a magic number" if N is a Magic number".
Print "[N] is not a magic number" otherwise".
Sample Input 0

1234
Sample Output 0

1234 is a magic number*/
#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d", &n);
    int num = n;
    while(n/10!=0){
        int sum = 0;
    while(n > 0){
        int x = n % 10;
        sum = sum + x;
        n = n / 10;
    }
        n = sum;
    }
    
     
    
    if(n == 1){
        printf("%d is a magic number", num);
    }
    else {
        printf("%d is not a magic number", num);
    }
    
    return 0;
}