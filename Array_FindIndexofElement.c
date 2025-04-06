/*You are given an array of integers and a target element. Your task is to find the first occurrence index of the target element in the array. If the element is not found, return -1.

Input Format

The first line contains an integer N, the size of the array.
The second line contains N space-separated integers, representing the array elements.
The third line contains a single integer, target, the element to search for.
Constraints

1 ≤ N ≤ 10^5
−10^6 ≤ arr[i] ≤ 10^6
1 ≤ target ≤ 10^5
Output Format

Print the 0-based index of the first occurrence of target in the array.
If target is not found, print -1.
Sample Input 0

6
4 2 7 2 9 5
2
Sample Output 0

1*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d\n", &n);
    int a[n];
    for(int i = 0; i <= n-1; ++i){
        scanf("%d\n", &a[i]);
    }
    int target;
    scanf("%d\n", &target);
    int flag = 0;
    int i;
    for( i = 0; i <= n-1; ++i){
        if(target == a[i]){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("%d", i);
    }
    else{
        printf("-1");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}