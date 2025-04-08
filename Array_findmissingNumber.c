/*means exactly one number is missing from the sequence.

Your task is to read the input, determine the missing number, and print the output.

Input Format

The first line contains a single integer N (size of the full sequence).
The second line contains N-1 distinct integers in the range [1, N] in any order.
Constraints

2 ≤ N ≤ 10^5
1 ≤ arr[i] ≤ N
The array contains distinct integers and is missing exactly one number.
Output Format

Print the missing number in the sequence.
Sample Input 0

7
3 7 1 2 6 5
Sample Output 0

4*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n-1];
    for(int i = 1; i <= n-1; ++i){
        scanf("%d", &a[i]);
    }
    int actualsum = (n*(n+1))/2;
    int sum = 0;
    for(int i = 1; i <= n-1; ++i){
        sum = sum + a[i];
     }
    int missing = actualsum - sum;
    printf("%d", missing);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}