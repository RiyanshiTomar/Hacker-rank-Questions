/*A Harshad Number is a number that is divisible by the sum of its digits.

Compute the sum of the digits of the number.
If the number is divisible by this sum, it is a Harshad Number.
Otherwise, it is not a Harshad Number.
Input Format

A single integer 𝑁.

Constraints

1 <= N <= 106

Output Format

Print,"[N] is a harshad number" if N is a Harshad number.
Print, "[N] is not a harshad number" otherwise.
Sample Input 0

4077
Sample Output 0

4077 is not a harshad number*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d", &n);
    int sum = 0;
    int num = n;
    while(n > 0){
        int x = n % 10;
        sum = sum + x;
        n = n/10;
    }
    if(num % sum == 0){
        printf("%d is a harshad number", num);
    }
    else{
        printf("%d is not a harshad number", num);
    }
    return 0;
}
